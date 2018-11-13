/*função: Receba o número de voltas, a extensão do circuito (em metros) e o tempo de duração (minutos). Calcule e mostre a velocidade média em km/h.
  Progrmador :Alvaro Pereira do Nascimento 
  data:15/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float  x,y,t,ex;
	float  x,y,t,ex;
	scanf ("%f", & x);// extensão em metros
	scanf ("%f", & y); //voltas
	scanf ("%f", & t);//tempo em minutos.
	t *= 60;// transforma os minutos em segundos
	ex=x*y;//calcula quantos metros foram percorridos.
	printf ("A velocidade media foi %.2f Km/h",((ex/t )*3.6));
	
}
