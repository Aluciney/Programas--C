/*
Função : Ler dois valores (a e b) e calcula o valor da hipotenusa.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float a,b,h;
	
	scanf("%f\n%f", &a,&b);
	h=sqrt((pow(a,2)+pow(b,2)));
	printf("H= %.2f\n", h);
		
	system("pause");
	return 0;
}
