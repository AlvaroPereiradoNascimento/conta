/*função: Calcule a quantidade de grãos contidos em um tabuleiro de xadrez onde:
			Casa: 1 2 3 4 ... 64
			Qdte: 1 2 4 8 ... N
		 Estoro de variavel com x = 32
  Progrmador :Alvaro Pereira do Nascimento 
  data:21/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	long int  x, y = 1 , aux = 0,aux1;
	scanf("%d", &x);//Coleta a quantidade de casas
	// efetua a apresenta dos valores 
	for (int i = 1; x >= i; i++ ){
		aux1 = y + aux;
		y = aux = aux1;
		printf("\n Casa %d quantidade %d",i,aux1);
	}

}

