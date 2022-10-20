/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação – Análise e Desenvolvimento de Sistemas
* Algoritmos
*
* Programa SegundoT1:
* -------------------------
* Objetivo do Programa: Segundo trabalho referente ao T1 da discplina de Algoritmos do curso de Análise e Desenvolvimento de Sistemas;
* Autor: Valdoci da Silva Moraes Junior;
* Data da entrega do arquivo fonte: 26/09/2022;
*/
#include <stdio.h>

int main(void)

{
	int cont, cid, idade, qtdeHM = 0, qtdeMM = 0, qtdeIE = 0;
	//qtdeHM = quantidade Homem Maior que 60 anos, qtdeMM = quantidade Mulher Maior que 80 anos, qtdeIE = Idade Entre.
	char sexo;
	
		for (cont = 0; cont <85; cont++) {
			printf ("Informe a sua idade: ");
			scanf ("%d", &idade);
			
			
			fflush (stdin);
			printf ("Informe o sexo: ");
			scanf ("%c", &sexo);
			
				if (idade >= 16 && idade <=18) {
					qtdeIE++;
				}
				
				if (sexo == 'f' && idade > 80) {
					qtdeMM++;
				}
				if (sexo == 'm' && idade >= 60) {
					qtdeHM++;
				}
		}
		
		printf ("O numero de eleitores com idade entre 16 e 18 anos: %d\n", qtdeIE);
		printf ("O numero de eleitores do sexo FEMININO com mais de 80 anos: %d\n", qtdeMM);
		printf ("O numero de eleitores do sexo MASCULINO com 60 anos ou mais: %d\n", qtdeHM);
		
		system("pause");
		return 0;
}
