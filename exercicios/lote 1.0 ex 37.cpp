/*função: Receba um número inteiro. Calcule e mostre a série de Fibonacci até o seu N’nésimo termo.
  Progrmador :Alvaro Pereira do Nascimento 
  data:21/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int  x , y, aux ,d;
	scanf("%d", &x);//Coleta do valor de n
	aux = 0;
	y = 1;
	// sequencia de Fibonacci
	for (int i = 0; x >= i; i++ ){
		d = aux+y; 
		aux = y;
		y = d;
	}
	printf("A sequencia de Fibonacci ate %d termo e %d", x,y);
}

