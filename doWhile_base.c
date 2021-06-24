#include <stdio.h>
#include <stdbool.h>

int main(){

	int numero = 10;

	do{

		printf("Hola\n");
		//corte interno
		//numero++; // numero += 1 // numero = numero + 1
		printf("Ingrese un numero\n");
		scanf("%i", &numero);

	}while(  numero != 10  );


	return 0;
}