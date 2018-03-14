/*
Função : Lê um valor em reais e exibi o equivalente em dólares. Considerando US$ 1 = R$ 3,12.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float real,dolar;
	
	printf("Informe valor em R$= ");
	scanf("%f",&real);
	dolar=(real/3.12);
	printf("R$ %.2f eh equivalente a U$ %.2f\n",real,dolar);
		
	system("pause");
	return 0;
}
