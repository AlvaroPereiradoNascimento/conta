/*função:CAIXA ELETRÔNICO 
			1. Criar um menu de opções: 
			Menu Principal (FEITO)
			1 – Carregar Notas (FEITO)
			2 – Retirar Notas (FEITO)
			3 – Estatística  (FEITO)
			9 – Fim   (FEITO)
				
			1.1. Carregar a quantidade de notas em uma área da memória com 6 ocorrências. (FEITO)
			1.2. Solicitar que o cliente faça a retirada de valores obedecendo ao critério do 
				maior pelo menor. ( FEITO)
			1.3. Dar a opção para o cliente escolher o valor e a quantidade de notas. : 1 x 20,     
				2 x 10 (somente essas duas opções) (ANDAMENTO)
			1.4. Caso não tenha o valor da maior cédula, disponibilizar a próxima. 
			1.5. Se o valor a ser solicitado for maior que o saldo total do caixa, enviar a 
				mensagem “EXCEDEU O LIMITE DO CAIXA”. (FEITO)
			1.6. Solicitar até 100 retiradas ou até não haver mais notas. 
			1.7. No momento da solicitação do valor, coletar também o código do banco que o 
				cliente tem conta, segundo: (Feito)
			
			1.8. No final, exibir a estatística, separada por bancos, com: 
  					código:|       1       |     2     |   3  |   4  |
  					banco: |Banco do Brasil| Santander | Itau | Caixa|
  					
			1.8.1. O maior e o menor valor sacado; 
			1.8.2. A média dos saques; 
			1.8.3. Valor total dos saques; 
			1.8.4. Valor das sobras dos caixas. 
  Progrmador :Alvaro Pereira do Nascimento 
  data:10/04/2018
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

//Variáveis utilizadas no carregamento
static float notas[6] = {2, 5, 10, 20, 50, 100};
static int   nagencia[4] = { 001,104, 341, 033};
static char  agencia[4] = {'B', 'C','I','S'};
static  int convbanc[4] = {0,3,2,1};
#define B Banco do Brasil
#define C Caixa
#define I Itau 
#define s Santander
static int   valorNotasV[6];
static int   qtdNotas[6];
static int   valorCaixa, contCarregar, contSaque;

//Variáveis utilizadas no saque
static int qtdClienteBanco[4];
static int saqueBanco[4];



int Verificacao(int retorno){
	int cont;
	
	int soma = 0;
	for(cont = 0; cont < 6; cont ++){
		if(notas[cont] == 0){
			soma += 1;
		}
	}
	
	if((soma == 6) || (contSaque == 100)){
		return 0;
	}
	else{
		return 1;
	}
		
}

void Carregar(int *p){


	int cont;
	int resp = 1;
	int acumula;
	// faz acumulo da quantidade de notas guardadas
	do{
		system("cls");
		for(cont = 0; cont < 6; cont ++){
			printf("\nQUantas notas para R$%3.2f: ", notas[cont]);
			fflush(stdin);
			scanf("%i", &acumula);
			// verificação para acumular valor ou somente inserir
			if (p[cont] > 0) p[cont] += acumula;
			else p[cont]  = acumula;
			printf("Valor em caixa: %i", p[cont] );
		}
		// Verifica se colaborador deseja inserir mais		
		printf("\nDeseja carregar mais cédulas?\n 1 para sim \n 0 para não\n Opção: ");
		scanf("%i", &resp);	
	}while(resp == 1);
	
}

void Sacar(int *p, int *a, int *totca, int * quantsac){
	
	int  codbanc, vs, op1[6],op2[6] ,y,i, re;
	char resp ='s';
	

		// limpeza do vetores para remoção de lixo.
		for (int j = 0;j < 6; j++) {
			op1[j] = 0;
			op2[j] = 0;
		}
		//limpeza de tela
		system("cls"); 
		// coleta de banco
		printf("Digite o código correspondente à sua agência bancária: \n 1 para Banco do Brasil\n 2 para Santander\n 3 para Itau\n 4 para Caixa\n  opção: ");
		scanf("%d", &codbanc);
		// coleta de valor para saque
		printf("Valor para saque: ");
		scanf("%d",&vs);
		// verifica se valor excede o caixa
		if (vs > *totca) {
			printf("EXCEDEU LIMITE DO CAIXA\n");
			system("pause");
			return; // para processo e volta para o menu
		}
		// caso cliente coloque um valor menor que a menor nota ele recusa
		if (vs< 2) {
			printf(" Valor não contido no caixa\n");
			system("pause");
			return;
		}
		// critério de retirada do maior para o menor
		for (int j = 5, i = vs; (i != 0 ) && (j >-1); j-- ){
			//efetua a divisão do valor valindando com modulo para verificar se pode ser subtraido sem falhas
				//caso o valor não seja par ele vai descer para a nota mais baixa e verificar se é par
			if ((i % (int)notas[j] != 0) && (i >= notas[j])){
				op1[j] = i/(int)notas[j];
				i = (i%(int)notas[j]);
				}
				// enquanto o modulo for par divide e sutrai a quantidade de notas para retirar
			else if((i % (int)notas[j] == 0)&& (i >= notas[j])){
				op1[j] = i/(int)notas[j];
				i = (i%(int)notas[j]);
			}
	}
			// efetua processso down top para coleta de valor
		for (int j = 0, y = vs; (y != 0) && (j < 6); j++){
				//efetua a divisão do valor valindando com modulo para verificar se pode ser subtraido sem falhas
				//caso o valor não seja par ele vai descer para a nota mais baixa e verificar se é par
			if ((y  % (int)notas[j] != 0 ) && (y >= notas[j])){
					// limitador de quantidade de notas por saída de caixa
					if (y/notas[j] < 11){
					op2[j] = y/(int)notas[j];
					y = y%(int)notas[j];
					}
					else {
						op2[j]=11;
						y = (int)(op2[j]*notas[j]) - y;
					}
			}
			
				// enquanto o modulo for par divide e sutrai a quantidade de notas para retirar
			else if((y % (int)notas[j] == 0)&& (y >= notas[j])){
					// limitador de quantidade de notas por saída de caixa
					if (y/notas[j] < 11){
					op2[j] = y/(int)notas[j];
					y = y%(int)notas[j];
					}
					else {
						op2[j]=11;

						y = (int)(op2[j]*notas[j]) - y;
					}
			}		
		}
		a[(convbanc[(codbanc -1)])] +=1;
		quantsac ++;
		system("CLS");
		printf("O valor do saque é %d para o banco %c\n",vs ,agencia[convbanc[(codbanc -1)]]);
		printf ("               Opções para saque:\n");
		printf("Opção 1   Opção 2\n");
		fflush(stdin);
		for (int g = 5; g > -1; g --)printf(" %3.d    ou   %3.d   notas de R$%3.2f\n", op1[g], op2[g],notas[g]);
		printf ("Qual a sua escolha? : ");
		scanf("%d",&re);
		if (re == 1) for (int i = 0; i < 6 ; i ++ ) p[i] -= op1[i];
		else if(re == 2) for (int i = 0; i < 6 ; i ++ ) p[i] -= op2[i];
		system("pause");

}
int main(){
	
	setlocale(LC_ALL, "portuguese");
	int op;
	
	int n = 0;
	// contador para quantidade sacada
	int quantsac = 0;
	// vetor com quantidade de notas no caixa de caixa
	int v[6];
	// valor total no caixa
	int totca = 0 ;
	// ponteiro de vetor com quantidade de notas no caixa
	int *vt = &v[0];
	// vetor de bancos cadastrados
	int banco[4] = {0,0,0,0};
	// ponteiro de vetor de banco
	int *ban = &banco[0];
	int verificaNotas = Verificacao(n);
	int resp, resp2= 1;
	int conta[4];
		// limpeza do valores do vetor para remoção de lixo.
		for (int j = 0;j < 6; j++)v[j] = 0;	
	
	do{
		system("cls");
		printf("---------------------------------\n");
		printf("-----MENU DE OPÇÕES-----\n");
		printf("Digite a opção de 1 até 4\n");
		printf("Digite 1 para CARREGAR NOTAS\n");	
		printf("Digite 2 para RETIRAR NOTAS\n");	
		printf("Digite 3 para ESTATÍSTICA\n");	
		printf("Digite 4 para FIM\n\n");
		printf("---------------------------------\n\n");
		printf("Digite a Operação: ");
		scanf ("%i", &op);
		
		switch(op){
			case 1:
				Carregar(vt);
				for(int i = 0 ; i < 6; i++) totca += v[i]*notas[i];
				printf("\nValor em total caixa: %d \n", totca );
				system("pause");
				break;
			case 2:
				Sacar(vt,ban, &totca, &quantsac);
				for(int i = 0 ; i < 6; i++) totca += v[i]*notas[i];
				printf("\nValor em total caixa: %d \n", totca );
				system("pause");
				break;
			case 3:
				break;
			case 4:
				resp2 = 2;
				break;
		}	
	}while(resp2 != 2);
	
}
