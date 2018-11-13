/*função: Receba 3 valores obrigatoriamente em ordem crescente e um 4º valor não necessariamente em ordem. Mostre os 4 números em ordem crescente.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int  x,y,z,a;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	scanf("%d", &a);
	if (a<=x) printf (" %d, %d, %d, %d ", a,x,y,z);
	else if  (a<=y && a>x )printf (" %d, %d, %d, %d ", x,a,y,z);
	else if  (a<=z && a>y )printf (" %d, %d, %d, %d ", x,y,a,z);
	else if  (a>=z)printf (" %d, %d, %d, %d ", x,y,z,a);
}
