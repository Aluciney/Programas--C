/*
Fun��o : Ler uma velocidade em km/h (quil�metros por hora) e apresenta convertida em m/s (metros por segundo).
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observa��es:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float M,K;
	
	scanf("%f", &K);
	M=(K/3.6);
	printf("M/s= %f\n", M);
		
	system("pause");
	return 0;
}
