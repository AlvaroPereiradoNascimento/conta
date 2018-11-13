/*função:Receba 2 valores reais. Calcule e mostre o maior deles.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float x,y;
	scanf("%f", &x);
	scanf("%f", &y);
	if (x>y) printf (" x e maior o valor e: %.2f\n\n", x);
	else printf (" y e maior o valor e: %.2f\n\n", y);
}
