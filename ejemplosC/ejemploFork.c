#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	int valor;

	pid=fork(); // duplico el programa

	switch (pid) {
	case -1:
	 	printf("ERROR al crear el proceso\n");
	 	break;
	case 0:
		/* hijo */
		printf("Soy el hijo con PID=%d, mi padre es %d\n", getpid(), getppid());
		break;
	default:
		/*  padre */
		printf("Soy el PADRE con PID=%d, mi padre es %d\n", getpid(), getppid());
		wait(NULL); 
 	}
	return 0;
}
