/*fun��o: Receba 2 n�meros inteiros, verifique qual o maior entre eles. Calcule e mostre o resultado da somat�ria dos n�meros �mpares entre esses valores.
  Progrmador :Alvaro Pereira do Nascimento 
  data:21/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int x , y, ma,me ,som;
	scanf("%d", &x);//Coleta ao primeiro valor
	scanf("%d", &y);// coleta o segundo valor
	som = 0;
	//verica qual � o maior valor
	if (x > y) {
		ma = x; 
		me = y;
	}
	else{
		ma = y; 
		me = x;
	}
	// soma dos impares
	for ( int i = me ; ma >= i ; i++) if (i%2 != 0) som += i;
		printf("A soma dos impares e: %d", som);
}

