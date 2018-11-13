/*função:Calcule e mostre quantos anos serão necessários para que Ana seja maior que Maria sabendo que Ana tem 1,10 m e cresce 3 cm ao ano e Maria tem 1,5 m e cresce 2 cm ao ano.
  Progrmador :Alvaro Pereira do Nascimento
  data:23/03/2018
*/

#define marc 0.2
#define anac 0.3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float mart = 1.5, anat = 1.1;
	int anos = 0;
	while(anat <= mart){
		anat += anac;
		mart += marc;
		anos ++;
	}
	printf("Levara %d anos", anos);
}
