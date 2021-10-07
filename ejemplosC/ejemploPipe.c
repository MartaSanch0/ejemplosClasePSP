#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	int valor, valorPipe;
	char buffer[20];

	int fd[2];
	// creo la pipe
	valorPipe = pipe(fd);
	if (valorPipe<0) {
		printf("Error al crear la pipe\n");
		return -1;
	}

	pid=fork(); // duplico el programa

	switch (pid) {
	case -1:
	 	printf("ERROR al crear el proceso\n");
	 	break;
	case 0:
		/* hijo */
		printf("Soy el hijo con PID=%d, mi padre es %d\n", getpid(), getppid());
		// escribo en la pipe un saludo al padre..escribo por el fd[1]
		write(fd[1], "un saludo", 9);
		break;
	default:
		/*  padre */
		printf("Soy el PADRE con PID=%d, mi padre es %d\n", getpid(), getppid());
		wait(NULL); // en realidad lo podría quitar, READ ya hace la espera
		read(fd[0], buffer, 9); // leo por el fd[0] lo que hay en la pipe
		printf("He leido de mi hijo '%s'\n", buffer);

 	}

	if (pid ==0) {
		printf("me voy siendo el HIJO\n");
	} else {
		printf("me voy siendo el PADRE\n");
	}
	return 0;
}
