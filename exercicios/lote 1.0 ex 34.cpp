/*fun��o: Receba um n�mero. Calcule e mostre os resultados da tabuada desse n�mero.
  Progrmador :Alvaro Pereira do Nascimento 
  data:21/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int x;
	scanf("%d", &x);
	for ( int i = 0; 10 >= i ; i++) {
	printf ("\n %2d X %2d = %3d", x,i,(x*i));
	}
}
