/*função:Receba a quantidade de alimento em quilos. Calcule e mostre quantos dias durará esse alimento sabendo que a pessoa consome 50g ao dia
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float x;
	scanf("%f", & x);
	x /= 0.05;
	printf (" Consumo ao dia e: %.2f \n\n", x);
}
