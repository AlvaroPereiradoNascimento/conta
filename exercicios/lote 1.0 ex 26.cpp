/*fun��o: Receba 2 n�meros inteiros. Verifique e mostre se o maior n�mero � m�ltiplo do menor.
  Progrmador :Alvaro Pereira do Nascimento 
  data:15/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int  x,y;
	scanf ("%d", & x);
	scanf ("%d", & y);
	if (x%y == 0) printf( "%d e multiplo de %d", x,y);
	else if(y%x ==0)printf( "%d e multiplo de %d", y,x);
	else  printf("nao sao mutiplos");
}
