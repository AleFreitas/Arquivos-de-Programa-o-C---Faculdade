//Português: Este programa recebe o nome e preço de três produtos e retorna uma comparação entre eles
//English: This program receives the name and price of three products and returns a comparison

//importando Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Definindo Constantes
#define VET 41
int main(){
    //Definindo a cor do sistema
    system("color 3");
    //Definindo a linguagem pra português
    setlocale(LC_ALL,"Portuguese");
    //definindo Variaveis pra receber Strings
    char n1[VET];
    char n2[VET];
    char n3[VET];
    //Definindo Variaveis Comuns
    float p1,p2,p3;
    //RECEBIMENTO DOS DADOS
    printf(">->->->-BEM VINDO AO CARRINHO DE COMPRAS-<-<-<-<\n");
    printf("insira o nome do primeiro produto: ");
    scanf("%40[^\n]",n1);
    printf("insira o valor do primeiro produto: R$ ");
    scanf("%f",&p1);
    printf("insira o nome do segundo produto: ");
    fflush(stdin);
    scanf("%40[^\n]",n2);
    printf("insira o valor do segundo produto: R$ ");
    scanf("%f",&p2);
    printf("insira o nome do terceiro produto: ");
    fflush(stdin);
    scanf("%40[^\n]",n3);
    printf("insira o valor do terceiro produto: R$ ");
    scanf("%f",&p3);
    printf("\n-----------------------------------------------------\n");
    printf("Os produtos inseridos foram:\n%s com valor de R$ %0.2f\n%s com valor de R$ %0.2f\n%s com valor de R$ %0.2f",n1,p1,n2,p2,n3,p3);
    printf("\n-----------------------------------------------------\n");
    //Tratamento de Condições
    if(p1<p2 && p1<p3){
        printf("\n....o produto mais barato é o: %s com o valor de R$ %0.2f....\n\n",n1,p1);
    }else{
        if(p2<p1 && p2<p3){
            printf("\n....o produto mais barato é o: %s com o valor de R$ %0.2f....\n\n",n2,p2);
        }else{
            if(p3<p2 && p3<p1){
                printf("\n....o produto mais barato é o: %s com o valor de R$ %0.2f....\n\n",n3,p3);
            }else{
                if(p3=p2 && p3<p1){
                    printf("\n....ambos, %s e %s tem o mesmo preço e são os mais baratos com o valor de R$ %o.2f....\n\n",n2,n3,p3);
                }else{
                    if(p3=p1 && p3<p1){
                        printf("\n....ambos, %s e %s tem o mesmo preço e são os mais baratos com o valor de R$ %0.2f....\n\n",n1,n3,p3);
                    }else{
                    if(p2=p1 && p2<p3){
                        printf("\n....ambos, %s e %s tem o mesmo preço e são os mais baratos com o valor de R$ %0.2f....\n\n",n1,n2,p2);
                    }
                    }
                }
            }
        }
    }

    return 0;

}
