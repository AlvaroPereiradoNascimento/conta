/*função: Calcule e mostre o quadrado dos números entre 10 e 150.
  Progrmador :Alvaro Pereira do Nascimento 
  data:19/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int x,y;
	x= 10;
	y = 150;
	while( x <= y){
	printf (" o quadrado de %2.d e: %3.d\n", x , (x*x));
	x++;
	}
	
}
