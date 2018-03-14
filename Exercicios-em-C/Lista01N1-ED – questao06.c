/*
Função : Calcula e imprimi o salário líquido de um professor.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float horaal,numaula,percdesc,valorl;
	
	printf("Valor Hora-Aula= ");
	scanf("%f",&horaal);
	printf("Numero Aula/Mes= ");
	scanf("%f",&numaula);
	printf("Percentual desconto INSS= ");
	scanf("%f",&percdesc);
	valorl=(horaal*numaula);
	valorl=valorl-((valorl*percdesc)/100);
	printf("O salario liquido desse (pobre) professor eh= R$ %.2f\n", valorl);
		
	system("pause");
	return 0;
}
