/*função: Receba um número inteiro. Calcule e mostre o seu fatorial.
estou de variavel em 32
  Progrmador :Alvaro Pereira do Nascimento 
  data:19/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	unsigned int x,y;
	scanf("%d", &x);
	y = 1;
	for (unsigned int i = x; i > 0 ; i--) y *= i;
	printf (" O fatorial e: %d", y);
}
