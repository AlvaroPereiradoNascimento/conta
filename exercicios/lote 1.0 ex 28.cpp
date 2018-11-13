/*função: Receba o preço atual e a média mensal de um produto. Calcule e mostre o
novo preço sabendo que:
Venda Mensal  		Preço Atual 		Preço Novo
< 500 				<30 				+ 10%
>= 500 e < 1000 	>= 30 e < 80 		+15%
>= 1000 			>= 80 				-5%
Obs.: para outras condições, preço novo será igual ao preço atual.
  Progrmador :Alvaro Pereira do Nascimento 
  data:16/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float  x,y,t,ex;
	scanf ("%f", & x);// preço atual
	scanf ("%f", & y); //média mensal
	if (y < 500 && x < 30) printf("novo preço e: %.2f", (x+(x*0.1)));
	else if ((y >= 500 && y < 1000) && (x >= 30 && x < 80)) printf("novo preço e: %.2f", (x+(x*0.15)));
	else if (y >= 1000 && x >= 80)printf("preco novo é %.2f", (x-(x*0.05)));
	else printf("O preco pemanecera %.2f", x);
	
}
