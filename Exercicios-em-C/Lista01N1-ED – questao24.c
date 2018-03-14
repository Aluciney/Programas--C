/*
Função : Calcula o IMC (Índice de Massa Corporal).  Lê o peso do usuário em quilogramas e a altura em metros.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  
	float peso,altura,imc;

	printf("Digite seu peso em quilogramas: ");
	scanf("%f",&peso);
	printf("Digite sua altura em metros: ");
	scanf("%f",&altura);
	imc=peso/pow(altura,2);
	printf("IMC = %f\n",imc);
	
	system("pause");
	return(0);
}
