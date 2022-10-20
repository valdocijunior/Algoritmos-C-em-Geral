#include <stdio.h>

int main(void)

{
	int cont, alunosAprovados = 0;
	float notas[6], somaNotas = 0, mediaNotas;
	
		for (cont = 0; cont < 6; cont++) {
			printf ("Insira a nota do aluno: ");
			scanf ("%f", &notas[cont]);
			
			somaNotas = notas[cont] + somaNotas;
		
		}
		mediaNotas = somaNotas / 6;
		
		for (cont = 0; cont < 6; cont++) {
			if (notas[cont] > mediaNotas) {
				alunosAprovados++;
			}
		}
		
		printf ("A media da turma foi: %.2f\n", mediaNotas);
		printf ("O numero de alunos aprovado foi: %d\n", alunosAprovados);
		
	system("pause");
	return 0;
}
