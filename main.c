#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funciones
int leer_numero(void);

int main (void){

	printf("Ingrese la cantidad de numeros deaseados: ");

	int n_arreglo = leer_numero();

	float *arr = (float*) malloc (n_arreglo * sizeof(float));

	srand ((unsigned int) time(NULL));

	for (int i = 0; i < n_arreglo; i++){	//forma: x = min + (float) rand / RAND_MAX * (max-min)
		arr[i] = 0.0 + (float) rand() / RAND_MAX * (1.0-0.0);	//rango: 0.0 - 1.0
		printf("%f \t", arr[i]);
	}

	free (arr);

	return 0;
}

int leer_numero(void){

	int num = 0;
	int c = getchar();

	while (c != '\n'){
		num = num * 10 + (c - '0');
		c = getchar();
	}
	return num;
}
