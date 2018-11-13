/*função:Receba um valor inteiro. Verifique e mostre se é divisível por 2 e 3.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define hma = 24 , mma = 59;
int main (){
	int  x;
	scanf("%d", &x);	
	if (x%2 == 0 && x%2 == 0) printf("divisivel por 2 e 3");
	else if (x%2==0)printf("divisivel somente por 2");
	else if (x%3==0)printf("divisivel somente por 3"); 

