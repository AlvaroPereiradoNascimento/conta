/*fun��o:Receba os coeficientes A, B e C de uma equa��o do 2� grau(AX�+BX+C=0). Calcule e mostre as ra�zes   reais (considerar que a equa��o possue2 ra�zes).
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
	printf (" o valor da primeira raiz �: %.2f\n\n", ((-B + sqrt(del))/2*A));
	printf (" o valor da segunda raiz �: %.2f\n\n", ((-B - sqrt(del))/2*A) );

}

