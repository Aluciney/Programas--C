/*
Fun��o : L� o sal�rio de um funcion�rio e imprimi com um aumento de 12%.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observa��es:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float salario,valorf;
	
	printf("Informe o valor de seu salario= R$ ");
	scanf("%f",&salario);
	valorf=salario+((salario*12)/100);
	printf("Seu salario atualizado eh= R$ %.2f\n",valorf);
	
	system("pause");
	return 0;
}
