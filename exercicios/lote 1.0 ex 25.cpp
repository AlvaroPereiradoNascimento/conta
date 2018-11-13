/*função: Receba a hora de início e de final de um jogo (HH,MM) sabendo que o tempo máximo é de 24 horas e pode começar num dia e terminar noutro.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define hma = 24 ;
#define mma = 59;

int main (){
	int  hi,mi,hf, mf, vi, vf;
	do {
	system("cls");
	printf ("Digite a hora do inicio no formato HH:MM: ");
	scanf("%d:%d", &hi,&mi);
	printf ("\nDigite a hora do final no formato HH:MM: ");
	scanf("%d:%d", &hf,&mf);
	printf("verificado hora inicial \n");
	if ((hi >= 0 && hi <= 23) && (mi >= 0 && mi <= 59)) {
	printf ("hora correta\n");
	vi= 1;
	}
	else {
	printf ("hora invalida\n");
	system ("pause");
	vi= 0;
	}
	printf("verificado hora final \n");
	if ((hf >= 0 && hf <= 23) && (mf >= 0 && mf <= 59)) {
	printf ("hora correta\n");
	vf= 1;
	}
	else {
	printf ("hora invalida\n");
	system ("pause");
	vf= 0;
	}
	}while(vi == 0 && vf == 0);
	
	if 	(hi < hf && mi < mf) printf("duracao do jogo: %d:%d", (hf-hi),(mf-mi));

	else if (hi < hf && mi > mf) printf("duracao do jogo: %d:%d", (hf-hi),(60+mf-mi));

	else if (hi > hf && mi < mf) printf("duracao do jogo: %d:%d", (23+hf-hi),(mf-mi));

	else if (hi > hf && mi > mf) printf("duracao do jogo: %d:%d", (23+hf-hi),(mf+60-mi));

	else if (hi== hf && mi ==mf)printf("Jogo durou um dia.");
}
