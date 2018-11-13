/*função:Receba o ano de nascimento e o ano atual. Calcule e mostre a sua idade e quantos anos terá daqui a 17 anos.
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
	printf (" Idade atual e: %d \n\n", (y-x));
	printf (" daqui 17 anos: %d", ((y-x)+17));
}
