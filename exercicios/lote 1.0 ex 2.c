/*função:Receba o salário de um funcionário e mostre o novo salário com reajuste de 15%.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

	float l;
	scanf("%f", &l);
	printf (" o valor é: %.2f", ((l*0.15)+l));

}

