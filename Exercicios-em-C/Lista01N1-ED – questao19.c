/*
Função : Sendo H = 1 + 1/2 +1/3 + 1/4 + ... + 1/N, calcular H, sendo que N é digitado pelo usuário.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  
	float N,H=0;

	printf("Digite um numero: ");
	scanf("%f",&N);

	while(N>0){
		H=H+1/N;
		N--;
	}
	printf("\n%f\n",H);
	
	system("pause");
	return(0);
}
