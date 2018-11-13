/*função:Receba 2 números inteiros. Verifique e mostre todos os números primos existentes entre eles.
  Progrmador :Alvaro Pereira do Nascimento
  data:23/03/2018
*/

#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
   	int x,y,d, EhPrimo;
	scanf("%d", &x);
	scanf("%d", &y);
	for(int n = x ;n < y; n++){
		if (n <= 1 || (n != 2 && n % 2 == 0)) EhPrimo = FALSE;
    		else EhPrimo = TRUE;
		d = 3;
		while (EhPrimo  && d <= n / 2) {
			if (n % d == 0)EhPrimo = 0;
			d = d + 2;
		}
		if (EhPrimo) printf("%d e' primo \n", n);

	}

	
}
