/*fun��o:Receba 3 coeficientes A, B, e C de uma equa��o do 2� grau da f�rmula AX�+BX+C=0. Verifique e mostre a exist�ncia de ra�zes reais e se caso exista, calcule e mostre.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

	float A, B, C , del, b2;
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	del = pow(B,2)-4*A*C;
	if (del < 0 )printf ("Nao possui raizes");
		else if (del == 0 ) printf ("a unica raiz e: %.2f\n\n", ((-B + sqrt(del))/2*A));
			else {
				printf (" o valor da primeira raiz �: %.2f\n\n", ((-B + sqrt(del))/2*A));
				printf (" o valor da segunda raiz �: %.2f\n\n", ((-B - sqrt(del))/2*A) );
			}
}

