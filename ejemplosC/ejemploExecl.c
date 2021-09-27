#include <stdio.h>
#include <unistd.h>

void main() {

	int valor;
	printf("Ejemplo de uso de execl();\n");
	valor = execl("/bin/ls" , "ls", "-l", NULL);
	printf("esto ya no lo imprime");
	printf("lo que ha devuelvo es %d", valor);
}
