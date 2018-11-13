/*função:Receba os valores em x e y. Efetua a troca de seus valores e mostre seus conteúdos.
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
	printf (" o valor x é: %i\n\n", x );
	printf (" o valor y é: %i\n\n", y );

}

