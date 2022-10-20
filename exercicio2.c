#include <stdio.h>

int main(void)

{
	int cont;
	float notas[8], maiorNota = 0;
	
		for (cont = 0; cont < 8; cont++) {
			printf ("Informe a nota do aluno: ");
			scanf ("%f", &notas[cont]);
			
			if (notas[cont] > maiorNota) {
				maiorNota = notas[cont];
			}
		}
		
	printf ("A maior nota da amostragem de 8 alunos foi: %.2f\n", maiorNota);
	
	system("pause");
	return 0;
}
