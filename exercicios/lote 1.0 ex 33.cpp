/*função: Receba um número. Calcule e mostre a série 1 + 1/2 + 1/3 + ... + 1/N
  Progrmador :Alvaro Pereira do Nascimento 
  data:19/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float x,y;
	scanf("%f", &x);
	y=0;
	for ( float i = 1; x >= i ; i++) y += 1/i;
	printf (" O Valor e: %.2f", y);
	
}
