/*
Fun��o : Recebe um n�mero inteiro de segundos do usu�rio e imprimi a quantidade correspondente em horas, minutos e segundos.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observa��es:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int hora,minuto,segundo;
	
	scanf("%d", &segundo);
	hora=(segundo/3600);
	minuto=(segundo-(3600*hora))/60;
	segundo=(segundo-(3600*hora)-(minuto*60));

	printf("%d:%d:%d\n", hora,minuto,segundo);
		
	system("pause");
	return 0;
}
