/*função:Receba os coeficientes A, B e C de uma equação do 2º grau(AX²+BX+C=0). Calcule e mostre as raízes   reais (considerar que a equação possue2 raízes).
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
	printf (" o valor da primeira raiz é: %.2f\n\n", ((-B + sqrt(del))/2*A));
	printf (" o valor da segunda raiz é: %.2f\n\n", ((-B - sqrt(del))/2*A) );

}

