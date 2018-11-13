/*função:Mostre todas as possibilidades de 2 dados de forma que a soma tenha como resultado 7.
  Progrmador :Alvaro Pereira do Nascimento
  data:23/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
   	int x,y=0;
	scanf("%d", &x);
	for(int i = 1;i < 7; i++)
	for( int d = 1; d < 7; d++)
	       if (i+d== x){
		printf(" \ndado 1:%d dado 2:%d igual a %d" , i,d,x);
		y++;
		}
    if (y<=0)printf("nao pode ser calculado com dois dados");
}
