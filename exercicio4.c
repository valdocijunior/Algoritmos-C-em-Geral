#include <stdio.h>

int main(void)

{
	int cont, nros[4];
	
		for (cont = 0; cont < 4; cont ++) {
			printf ("Insira um numero INTEIRO: ");
			scanf ("%d", &nros[cont]);
		}
		
		for (cont = 3; cont >= 0; cont--) {
			printf ("%d\n", nros[cont]);
		}
		
	system("pause");
	return 0;
}
