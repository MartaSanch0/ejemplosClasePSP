#include <stdio.h>

int main(){
    char cadena[20]; // Aquí alojaremos el valor leído
    printf("Escribe tu nombre:\n");
    scanf("%s", cadena); // No usamos &
    printf("Tu nombre es es: %s", cadena);
}
