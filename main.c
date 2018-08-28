#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  
  int x,y,a,b,resultado;
  
  printf("La operaci'on que se realizar'a es de la forma: (x+y)(x+y)(a-b)\n\n");
  
  printf("Ingresa los valores para tus variables\n\n     x=");
  scanf("%d",&x);
  
  printf("     y=");
  scanf("%d",&y);
  
  printf("     a=");
  scanf("%d",&a);
  
  printf("     b=");
  scanf("%d",&b);
  
  resultado=(x+y)*(x+y)*(a-b);
  
  printf("\nEl resultado de tu operaci'on es: %i\n\n",resultado);
  
  system("PAUSE");	
  return 0;
}
