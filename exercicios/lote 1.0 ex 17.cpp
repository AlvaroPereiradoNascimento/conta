/*função:Calcule a quantidade de litros gastos em uma viagem, sabendo que o automóvel faz 12 km/l. Receber o tempo de percurso e a velocidade média.
  Progrmador :Alvaro Pereira do Nascimento 
  data:26/02/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
   	float x,y,s, resp;
	printf (" tempo do percurso: ");
	scanf("%f", & x);
	printf("\n velocidade media: ");
	scanf("%f", & y);
	s= x*y;
	resp = s/12;
	printf (" Os litros gastos na viagem sao: %f \n\n", resp);
}
