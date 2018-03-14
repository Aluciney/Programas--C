/*
Função : Lê dois números e informa o dividendo, o divisor, o quociente e o resto.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int divd,divs;
	
	printf("Informe Dividendo= ");
	scanf("%d",&divd);
	printf("Informe Divisor= ");
	scanf("%d",&divs);
	printf("O dividendo eh %d\n",divd);
	printf("O divisor eh %d\n",divs);
	printf("O quociente eh %.2f\n",(float)divd/divs);
	printf("O resto eh %d\n",divd%divs);
	
	system("pause");
	return 0;
}
