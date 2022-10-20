#include <stdio.h>

int main(void)

{
	int cont;
	float notas[10];
	
		for (cont = 0; cont < 10; cont++) {
			printf ("Informe a nota do aluno: ");
			scanf ("%f", &notas[cont]);
		}
		
		for (cont = 0; cont < 10; cont++) {
			if (notas[cont] < 5) {
				printf ("A nota do aluno: %.2f\n", notas[cont]);
			}
		}
		
	system("pause");
	return 0;
}
