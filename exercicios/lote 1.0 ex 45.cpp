/*função:Calcule e mostre a série 1 – 2/4 + 3/9 – 4/16 + 5/25 + ... + 15/225
  Progrmador :Alvaro Pereira do Nascimento
  data:23/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int x =15 ;
	float c = 0;
	//scanf("%d", X);
	for (int y = 1; y <= x; y++)
		if ( y%2 == 0 ){
			printf(" %d/%d +", y ,(y*y));
			c -= y/(y*y);
		}
		else if ( y%2 != 0 ){
			printf(" %d/%d -", y ,(y*y));
			c += y/(y*y);
		}
	printf ("\b\b = %f", c);
}
