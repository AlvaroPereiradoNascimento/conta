/*fun��o: Receba o pre�o atual e a m�dia mensal de um produto. Calcule e mostre o
novo pre�o sabendo que:
Venda Mensal  		Pre�o Atual 		Pre�o Novo
< 500 				<30 				+ 10%
>= 500 e < 1000 	>= 30 e < 80 		+15%
>= 1000 			>= 80 				-5%
Obs.: para outras condi��es, pre�o novo ser� igual ao pre�o atual.
  Progrmador :Alvaro Pereira do Nascimento 
  data:16/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float  x,y,t,ex;
	scanf ("%f", & x);// pre�o atual
	scanf ("%f", & y); //m�dia mensal
	if (y < 500 && x < 30) printf("novo pre�o e: %.2f", (x+(x*0.1)));
	else if ((y >= 500 && y < 1000) && (x >= 30 && x < 80)) printf("novo pre�o e: %.2f", (x+(x*0.15)));
	else if (y >= 1000 && x >= 80)printf("preco novo � %.2f", (x-(x*0.05)));
	else printf("O preco pemanecera %.2f", x);
	
}
