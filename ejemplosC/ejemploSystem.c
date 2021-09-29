#include <stdio.h>

void main() {

	printf("Ejemplo de uso de system();\n");

	printf("salida system=%d", system("ls > ficheroSalida.txt"));

	printf("\n");
	printf ("Vamos a mostar ahora el fichero del fichero \n");
	printf("\n--------------------------------------------\n");
	printf ("salida system=%d", system ("more ficheroSalida.txt"));
	printf("\n--------------------------------------------\n");

	printf("\n");
	printf("Salida de programa erroneo: %d", system("dad"));
	printf("\n");
	
}
