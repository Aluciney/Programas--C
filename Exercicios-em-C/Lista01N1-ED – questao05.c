/*
Fun��o : Determina a �rea e o per�metro de um ret�ngulo.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observa��es:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float base,altura,area,perimetro;
	
	printf("Base em metros= ");
	scanf("%f",&base);
	printf("Altura em metros= ");
	scanf("%f",&altura);
	area=(base*altura);
	perimetro=(base*2)+(altura*2);
	printf("Area= %.2f m(2)\nPerimetro= %.2f m\n", area,perimetro);
		
	system("pause");
	return 0;
}
