/*função: Receba o tipo de investimento (1 = poupança e 2 = renda fixa) e o valor do investimento. Calcule e mostre o valor corrigido em 30 dias sabendo que a poupança = 3% e a renda fixa = 5%. Demais tipos não serão considerados.
  Progrmador :Alvaro Pereira do Nascimento 
  data:16/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float  y;
	int x;
	scanf ("%f", & x);// tipo de investimento
	scanf ("%f", & y); //valor do investimento
	switch (x){
		case '1': 
			printf ("O valor apos rendimento da poupança sera : %d", (y+(y*0.03)));
			break;
		case '2':
			printf("O valor apos rendimento da renda fixa sera : %d", (y+(y*0.05)));
			break;
		default: printf ("Nao e poupanca ou renda fixa por favor digite o tipo de investimento (1 = poupança e 2 = renda fixa) e o valor do investimento");
	}
}
