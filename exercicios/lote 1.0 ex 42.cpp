/*fun��o:Calcule e mostre a s�rie 1 + 2/3 + 3/5 + ... + 50/99
  Progrmador :Alvaro Pereira do Nascimento
  data:23/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float x = 2, y = 3,c=1;
	printf("1 +");
	while(x <= 50){
		printf( " %.0f/%.0f +", x,y);
		c += x/y;
		x++;
		y+=2;
	}
	printf(" \b\b =  %.2f", c);
}
