/*função: Receba um número N. Calcule e mostre a série 1 + 1/1! + 1/2! + ... + 1/N!
  Progrmador :Alvaro Pereira do Nascimento 
  data:21/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float x , y,fat;
	scanf("%f", &x);//Coleta do valor de n
	y = 0;
	//soma dos fatoriais
	for ( float i = 1 ; x >= i ; i++) {
		fat = 1;
		for (float d= 1; i>=d; d++)fat *= d;	
		y += 1/fat;
		
	}
	printf("A soma das fracoes e: %f", y);
}

