/*função: Receba 100 números inteiros reais. Verifique e mostre o maior e o menor valor. Obs.: somente valores positivos.
  Progrmador :Alvaro Pereira do Nascimento 
  data:21/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float  x , ma, me;
	scanf("%f", &x);//Coleta do valor de n
	ma = x;
	me = x;
	// sequencia de coleta dos 99 valores restantes
	for (int i = 1; 99 >= i; i++ ){
		printf ("\nDigite um novo valor: ");
		scanf("%f", &x);//Coleta o proximo valor de n
		if (x > ma) ma= x;
		else if (x < me) me = x;
	}
	printf("O menor valor e %.2f e o maior valor e %.2f", me,ma);
}

