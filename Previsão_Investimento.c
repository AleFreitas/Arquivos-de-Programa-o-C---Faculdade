/*
English: This file is a Investment Calculator. You insert a initial amount, the time in months that you will invest and the average rate of return
and get the expected profit*/
/*
Português: Este arquivo é uma Calculadora de Investimentos. Você insere um capital inicial, o tempo em meses que pretende investir e a taxa media de retorno 
e recebe o seu lucro esperado
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    //Instanciando Variaveis
    float m,j,c,i;
    int t;
    //Definindo Linguagem como Portugues
    setlocale(LC_ALL,"Portuguese");
    //Definindo Cor do Sistema
    system("color 0B");
    //Recebimmento de Dados
    printf("Lembre-se que nesse programa decimais são separados por virgula!!!\n");
    printf("___________________________________________________\n\n ¨¨¨insira o capital a ser investido a cada mês¨¨¨\n___________________________________________________\n");
    scanf("%f",&c);
    printf("\n_____________________________________________________________________\n\n ¨¨¨quanto tempo em meses você pretende deixar o dinheiro render?¨¨¨\n\n_____________________________________________________________________\n");
    scanf("%d",&t);
    printf("\n__________________________________________________________\n\n ¨¨¨qual a taxa de media de retorno do investimento¨¨¨\n\n__________________________________________________________\n");
    scanf("%f",&i);
    //Calculos dos dados recebidos
    j = i+1;
    m = c * (pow(j,t));
    //Exibindo Resultado Final
    printf("o montante final será de %0.3f",m);

    return 1;
}
