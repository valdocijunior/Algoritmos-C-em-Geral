/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação – Análise e Desenvolvimento de Sistemas
* Algoritmos
*
* Programa PrimeiroT1:
* -------------------------
* Objetivo do Programa: Trabalho referente ao T1 da disciplina de Algoritmos do curso de Análise e Desenvolvimento de Sistemas;
* Autor: Valdoci da Silva Moraes Junior;
* Data da entrega do arquivo fonte: 05/09/2022;
*/

#include <stdio.h>

int main(void)

{
	float salario, conta1, conta2, conta3;
	float conta1valor, conta2valor, conta3valor;
	float salario2, valorpoupmari;
	float salario3, valorpoupfilho;
	float salariorestante;
	
		printf ("Mariana, insira o valor do seu salario:");
		scanf ("%f", &salario);
		printf ("\nValor da primeira conta: ");
		scanf ("%f", &conta1);
		printf ("\nValor da segunda conta: ");
		scanf ("%f", &conta2);
		printf ("\nValor da terceira conta: ");
		scanf ("%f", &conta3);
	
	//primeira movimentação
	
			conta1valor = conta1 * 0.936;
			conta2valor = conta2 * 0.951;
			conta3valor = conta3 * 1.073;
			salario2 = (salario - conta1valor - conta2valor - conta3valor);
	
	//segunda movimentação
	
			valorpoupmari = (salario2 * 0.15);
			salario3 = (salario2 - valorpoupmari);
			
	//terceira movimentação
	
			valorpoupfilho = (salario3 * 0.04);
			
			salariorestante = (salario3 - valorpoupfilho);
			
			
	//questões
	
		printf ("a) O valor a pagar da primeira conta: %f\n", conta1valor);
		printf ("b) O valor a pagar da segunda conta: %f\n", conta2valor);
		printf ("c) O valor a pagar da terceira conta: %f\n", conta3valor);
		printf ("d) O valor que sera guardado na conta poupanca da Mariana: %f\n", valorpoupmari);
		printf ("e) O valor que sera guardado na conta poupanca do filho da Mariana: %f\n", valorpoupfilho);
		printf ("a) Quanto restara do salario da Mariana apos as tres movimentacoes: %f\n", salariorestante);
		
		system("pause");
		return 0;
}
