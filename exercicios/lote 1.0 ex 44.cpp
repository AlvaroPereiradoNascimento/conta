/*fun��o:Receba o n�mero da base e do expoente. Calcule e mostre o valor da pot�ncia.
  Progrmador :Alvaro Pereira do Nascimento
  data:23/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int base, expo;
	scanf("%d", &base);
	scanf("%d", &expo);
	printf("a potencia e %.0f", pow(base,expo));
}
