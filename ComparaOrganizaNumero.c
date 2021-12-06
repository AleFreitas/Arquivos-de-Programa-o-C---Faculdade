/*
Português: Este programa recebe tres numeros, compara eles e com base na decisão do usuario ele organiza e mostra
esses numeros diferentes tipos de ordem
*/
/*
English: This program takes three numbers, compares them and based on the user's decision it organizes and displays
these numbers in different order types.
*/
#include<stdio.h>
int main()
{
	int x,y,z,n1;
	printf("digite o numero desejado com base na tabela, de 1 a 3: \n1-> os numeros aparecem em ordem crescente\n2-> os numeros aparecem em ordem decrescente.\n3-> o maior numero apareçe entre os outros\n");
	scanf("%d",&n1);
	printf("digite tres numeros: ");
	scanf("%d""%d""%d",&x,&y,&z);


	switch(n1)
	{
		case 2 :
			printf("os numeros aparecem em ordem decrescente.\n");
			if(x<y && y<z){
				printf("a ordem decrescente e %d, %d, %d.",z,y,x);
			}
			else{
				if(x<z && z<y){
					printf("a ordem decrescente e %d, %d, %d.",y,z,x);
				}
				else{
					if(z<x && x<y){
						printf("a ordem decrescente e %d, %d, %d.",y,x,z);
					}
					else{
						if(z<y && y<x){
							printf("a ordem decrescente e %d, %d, %d.",x,y,z);
						}
						else{
							if(y<z && z<x){
								printf("a ordem decrescente e %d, %d, %d.",x,z,y);
							}
							else{
								printf("a ordem decrescente e %d, %d, %d.",z,x,y);
							}
						}
					}
				}
			}
		break;

		case 1 :
			printf("os numeros aparecem em ordem crescente\n");
			if(x<y && y<z){
				printf("a ordem crescente e %d, %d, %d.",x,y,z);
			}
			else{
				if(x<z && z<y){
					printf("a ordem crescente e %d, %d, %d.",x,z,y);
				}
				else{
					if(z<x && x<y){
						printf("a ordem crescente e %d, %d, %d.",z,x,y);
					}
					else{
						if(z<y && y<x){
							printf("a ordem crescente e %d, %d, %d.",z,y,x);
						}
						else{
							if(y<z && z<x){
								printf("a ordem crescente e %d, %d, %d.",y,z,x);
							}
							else{
								printf("a ordem crescente e %d, %d, %d.",y,x,z);
							}
						}
					}
				}
			}
		break;

		case 3 :
			printf("o maior numero apareçe entre os outros\n");
			if(x<y && y<z){
				printf("a ordem e %d, %d, %d.",x,z,y);
			}
			else{
				if(x<z && z<y){
					printf("a ordem e %d, %d, %d.",x,y,z);
				}
				else{
					if(z<x && x<y){
						printf("a ordem e %d, %d, %d.",z,y,x);
					}
					else{
						if(z<y && y<x){
							printf("a ordem e %d, %d, %d.",z,x,y);
						}
						else{
							if(y<z && z<x){
								printf("a ordem e %d, %d, %d.",y,x,z);
							}
							else{
								printf("a ordem e %d, %d, %d.",y,z,x);
							}
						}
					}
				}
			}
		break;


		default :
			printf("Erro: o numero da tabela deve ser 1,2 ou 3.....");
	}
	return 0;
}
