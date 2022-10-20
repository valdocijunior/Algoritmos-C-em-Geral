#include <stdio.h>

int main(void)

{
	int cont, nros[10];
	
		for (cont = 0; cont < 10; cont++) {
			printf ("Informe um numero INTEIRO: ");
			scanf ("%d", &nros[cont]);
			
			if (nros[cont] == 30) {
				printf ("Na posicao: %d do vetor, o valor eh igual a 30\n", cont);
			}
		}
		
	system("pause");
	return 0;
}
