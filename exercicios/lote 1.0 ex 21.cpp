/*fun��o:Receba 4 notas bimestrais de um aluno. Calcule e mostre a m�dia aritm�tica. Mostre a mensagem de acordo com a m�dia:
a. Se a m�dia for >= 6,0 exibir �APROVADO�;
b. Se a m�dia for >= 3,0 ou < 6,0 exibir �EXAME�;
c. Se a m�dia for < 3,0 exibir �RETIDO�.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

	float a, b, c , d, med;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	med = (a+b+c+d)/4;
	if (med >= 6 )printf ("APROVADO");
		else if (med >=3 && med < 6 ) printf ("EXAME");
			else printf ("RETIDO");
}
