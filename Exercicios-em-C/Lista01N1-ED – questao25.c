/*
Fun��o : Calcula o IMC (�ndice de Massa Corporal).  L� o peso do usu�rio em quilogramas e a altura em metros. Exibi as informa��es 
do Minist�rio da Sa�de para que a pessoa possa avaliar seu IMC: Abaixo do peso; Normal; Acima do peso; Obeso.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observa��es:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  
	float peso,altura,imc;

	printf("Digite seu peso em quilogramas: ");
	scanf("%f",&peso);
	printf("Digite sua altura em metros: ");
	scanf("%f",&altura);
	imc=peso/pow(altura,2);
	if(imc<18.5){
		printf("\nAbaixo do peso. IMC = %f\n",imc);
	}else{
		if(imc>=18.5 && imc<25){
			printf("\nNormal. IMC = %f\n",imc);
		}else{
			if(imc>=25 && imc<30){
				printf("\nAcima do peso. IMC = %f\n",imc);
			}else{
				if(imc>=30){
					printf("\nObeso. IMC = %f\n",imc);
				}
			}
		}
	}	
		
	system("pause");
	return(0);
}
