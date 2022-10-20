#include <stdio.h>

int main(void)

{
	int cont, idades[10], somaIdades = 0, indivEntre = 0, menorIdade = 999, maiorIdade = 0;
	float mediaIdades;
	
		for (cont = 0; cont < 10; cont++) {
			printf ("Diga a sua idade: ");
			scanf ("%d", &idades[cont]);
			
			somaIdades = idades[cont] + somaIdades;
		
			if (idades[cont] < menorIdade) {
				menorIdade = idades[cont];
			}
			if (idades[cont] > maiorIdade) {
				maiorIdade = idades[cont];
			}
		}
		
		for (cont = 0; cont < 10; cont++) {
			if (idades[cont] >=15 && idades[cont] <= 18) {
				indivEntre++;
			}
		}
		
		mediaIdades = ((float)somaIdades)/10;
		
		printf ("A soma das idades: %d anos\n", somaIdades);
		printf ("A media das idades: %.2f anos\n", mediaIdades);
		printf ("A quantidade de individuos com a idade maior ou igual a 15 e menor ou igual: %d\n", indivEntre);
		printf ("A menor idade: %d anos\n", menorIdade);
		printf ("A maior idade: %d anos\n", maiorIdade);
		
		system("pause");
		return 0;
}
