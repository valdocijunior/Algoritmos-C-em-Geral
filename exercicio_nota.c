#include <stdio.h>

int main(void)

{
	/*float nota0, nota1, nota2, nota3, nota4;
	
		printf ("Informe a nota ");
		scanf ("%f", &nota0);
		printf ("Informe a nota ");
		scanf ("%f", &nota1);
		printf ("Informe a nota ");
		scanf ("%f", &nota2);
		printf ("Informe a nota ");
		scanf ("%f", &nota3);
		printf ("Informe a nota ");
		scanf ("%f", &nota4);
		
	printf ("As notas sao, respectivamente: %.2f %.2f %.2f %.2f %.2f", nota0, nota1, nota2, nota3, nota4);*/
	
	
	
	
	//COM VETORES ->
	/*
	int cont;
	float notas[5];
	
		for (cont = 0; cont < 5; cont++) {
			printf ("Informe a nota do aluno: ");
			scanf ("%f", &notas[cont]);
		}
		
		for (cont = 0; cont < 5; cont++) {
			printf ("A nota do aluno e: %.2f\n", notas[cont]);
		} */
		
		
		
	int cont;
	float notas[10];
	
		for (cont = 0; cont < 10; cont++) {
			printf ("Informe a nota do aluno: ");
			scanf ("%f", &notas[cont]);
		}
		
		for (cont = 0; cont < 10; cont++) {
			if (notas[cont] > 7) {
				printf ("A nota do aluno: %.2f APROVADO \n", notas[cont]);
			} else {
				printf ("A nota do aluno: %.2f REPROVADO \n", notas[cont]);
			}
		}
		
		system("pause");
		return 0;
		
}








