/*
Fun��o : L� o pre�o de um par de sapatos numa loja e escreve com um desconto de x%. X � fornecido pelo usu�rio.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observa��es:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valor,des;
	
	printf("Informe o valor: ");
	scanf("%f",&valor);
	printf("Informe a porcentagem de desconto: ");
	scanf("%f",&des);
	valor=valor-((valor*des)/100);
	printf("O valor ficou: R$ %.2f\n",valor);
	
	system("pause");
	return 0;
}
