/*fun��o: Receba o n�mero de voltas, a extens�o do circuito (em metros) e o tempo de dura��o (minutos). Calcule e mostre a velocidade m�dia em km/h.
  Progrmador :Alvaro Pereira do Nascimento 
  data:15/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float  x,y,t,ex;
	float  x,y,t,ex;
	scanf ("%f", & x);// extens�o em metros
	scanf ("%f", & y); //voltas
	scanf ("%f", & t);//tempo em minutos.
	t *= 60;// transforma os minutos em segundos
	ex=x*y;//calcula quantos metros foram percorridos.
	printf ("A velocidade media foi %.2f Km/h",((ex/t )*3.6));
	
}
