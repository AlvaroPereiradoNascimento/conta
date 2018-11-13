/*função:Receba 2 valores inteiros. Calcule e mostre o resultado da diferença do maior pelo menos valor.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int x,y;
	scanf("%i", &x);
	scanf("%i", &y);
	if (x>y) printf (" x e maior \n A difereça e: %d\n\n", (x-y));
	else printf (" y e maior\n A difereça e: %d\n\n", (y-x));
}
