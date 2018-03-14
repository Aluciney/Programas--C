/*
Função : Lê dois valores reais e exibi o primeiro com um acréscimo de 30%, e o segundo com um desconto de 25%.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valor1,valor2;
	
	printf("Informe o primeiro valor: ");
	scanf("%f",&valor1);
	printf("Informe o segundo valor: ");
	scanf("%f",&valor2);
	valor1=valor1+((valor1*30)/100);
	valor2=valor2-((valor2*25)/100);
	printf("O valor do primeiro teve seus 30% acrescimo para R$ %.2f\n",valor1);
	printf("O valor do segundo teve seus 25% desconto para R$ %.2f\n",valor2);
	
	system("pause");
	return 0;
}
