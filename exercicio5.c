#include <stdio.h>

int main(void)

{
	int cont, nros[10], nrosNegativos[10];
	
		for (cont = 0; cont < 10; cont++) {
			printf ("Insira numeros inteiros: ");
			scanf ("%d", &nros[cont]);
		}
		for (cont = 0; cont< 10; cont++) {
			printf("%d, ", nros[cont]);
		}
		for (cont = 0; cont < 10; cont++) {
			printf ("Digite um numero: ");
			scanf ("%d", &nrosNegativos[cont]);
			
				if (nrosNegativos[cont] < 0) {
					nrosNegativos[cont] = 0;
				}
		}
		for (cont = 0; cont < 10; cont++) {
			printf ("%d, ", nrosNegativos[cont]);
		}
		
		
	system("pause");
	return 0; 
}
