/*
Função : Calcula e imprimi a área de um triangulo.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float base,altura,area;
	
	printf("Informe a base em metros: ");
	scanf("%f",&base);
	printf("Informe a alturaem metros: ");
	scanf("%f",&altura);
	area=((base*altura)/2);
	printf("A area eh %.2f m(2)\n",area);
	
	system("pause");
	return 0;
}
