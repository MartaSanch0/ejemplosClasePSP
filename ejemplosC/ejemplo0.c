#include <stdio.h>

int main()
{
  int x;

  printf( "Escribe un número: " );
  scanf( "%d", &x ); // recoge de teclado un entero
  printf( "Escribiste %d", x ); // imprime un texto y el entero (la variable n)
 // getchar();
  return 0;
}
