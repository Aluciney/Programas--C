/*
Função : Recebe 5 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira).
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n1,n2,n3,n4,n5;
	float media;
	
	scanf("%d\n%d\n%d\n%d\n%d", &n1,&n2,&n3,&n4,&n5);
	media=((n1+n2+n3+n4+n5)/5.00);
	printf("Media= %.2f\n", media);
		
	system("pause");
	return 0;
}
