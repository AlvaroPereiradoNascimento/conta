/*fun��o:Receba os valores em x e y. Efetua a troca de seus valores e mostre seus conte�dos.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

	int x, y, z;
	scanf("%i", &x);
	scanf("%i", &y);
	z = x;
	x=y;
	y=z;
	printf (" o valor x �: %i\n\n", x );
	printf (" o valor y �: %i\n\n", y );

}

