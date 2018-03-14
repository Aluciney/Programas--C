/*
Função : Receba o número do mês e mostra o mês correspondente.
Autor : Aluciney de Souza Wanderley
Data : 12/03/2018
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  
	int num;

	printf("Digite o numero do mes: ");
	scanf("%d",&num);
	if(num<1 || num>12){
		printf("Mes invalido!\n");
	}else{
		if(num==1){
			printf("Janeiro\n");
		}else{
			if(num==2){
				printf("Fevereiro\n");
			}else{
				if(num==3){
					printf("Marco\n");
				}else{
					if(num==4){
						printf("Abril\n");
					}else{
						if(num==5){
							printf("Maio\n");
						}else{
							if(num==6){
								printf("Junho\n");
							}else{
								if(num==7){
									printf("Julho\n");
								}else{
									if(num==8){
										printf("Agosto\n");
									}else{
										if(num==9){
											printf("Setembro\n");
										}else{
											if(num==10){
												printf("Outubro\n");
											}else{
												if(num==11){
													printf("Novembro\n");
												}else{
													if(num==12){
														printf("Dezembro\n");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	system("pause");
	return(0);
}
