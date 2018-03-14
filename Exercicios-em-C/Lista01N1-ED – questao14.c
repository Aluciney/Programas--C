/*
Fun��o : Informa a m�dia aritm�tica, a m�dia harm�nica (MH), a m�dia geom�trica (MG) e a m�dia quadr�tica (MQ).
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observa��es:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float a,b,c,d;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	
	printf("Media Aritmetrica: %.2f\n",(a+b+c+d)/4.0);
	printf("Media Harmonica: %.2f\n",4.0/((1/a)+(1/b)+(1/c)+(1/d)));
	printf("Media Geometrica: %g\n",pow((a*b*c*d),1.0/4.0));
	printf("Media Quadrada: %g\n",sqrt((pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2))/4.0));
	
	system("pause");
	return 0;
}
