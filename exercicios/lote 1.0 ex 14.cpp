/*função:Receba 2 ângulos de um triângulo. Calcule e mostre o valor do 3º ângulo.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    unsigned int x,y, m;
	scanf("%i", & x);
	scanf("%i", & y);
	m=180;
	x +=y;
	m -=x;
	printf (" O terceiro grau e: %d \n\n", m);
}
