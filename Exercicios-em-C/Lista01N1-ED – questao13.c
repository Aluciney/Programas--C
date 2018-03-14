/*
Função : Calcular a área de um triangulo Retângulo usando o Teorema de Heron.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float a,b,c,s,area;
	
	printf("Informe os tres lados do triangulo em metros: ");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("A Area eh: %.2f m(2)\n",area);
	
	system("pause");
	return 0;
}
