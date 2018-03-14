/*
Função : Dados os pontos A, de coordenadas A(x1, y1) e B de coordenadas B(x2, y2), determina a distância entre os dois pontos.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float x1,x2,y1,y2,dist;
	
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	dist= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("Distancia = %.2f\n",dist);
	
	system("pause");
	return 0;
}
