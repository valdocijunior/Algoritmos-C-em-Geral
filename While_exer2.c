#include <stdio.h>

int main(void)

{
	int categoria, cat1 = 0, cat2 = 0, cat3 = 0;
	float valor, valor1 = 0, valor2 = 0, valor3 = 0;
	char resp;
	
	printf ("Deseja iniciar o programa S/N ");
	scanf ("%c", &resp);
	while (resp == 's') {
		printf ("Informe a sua categoria de cliente 1/2/3 ");
		scanf ("%d", &categoria);
		printf ("Quanto voce gastou ");
		scanf ("%f", &valor);
		
			if (categoria == 1) {
				cat1++;
				valor1 = valor1 + valor;
			}
			if (categoria == 2) {
				cat2++;
				valor2 = valor2 + valor;
			}
			if (categoria == 3) {
				cat3++;
				valor3 = valor3 + valor;
			}
			printf ("Deseja continuar S/N ");
			fflush (stdin);
			scanf ("%c", &resp);
	}
	
	if (cat1 > cat2 && cat1 > cat3) {
		printf ("A categoria que mais fez compras foi a 1 e o valor total gasto foi %.2f reais\n", valor1);
	}
	if (cat1 > cat3 && cat2 > cat1) {
		printf ("A categoria que mais fez compras foi a 2 e o valor total gasto foi %.2f reais\n", valor2);
	}
	if (cat3 > cat1 && cat3 > cat2) {
		printf ("A categoria que mais fez compras foi a 3 e o valor total gasto foi %.2f reais\n", valor3);
	}
}
