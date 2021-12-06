//Português: Este programa é um teste de Structs, recebe dados de um numero x de pessoas e imprime esses dados
//English: this program is a Struct Test, it receives data of a given number of people and shows their data
#include <stdio.h>
#include <locale.h>
typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

void ImprimePessoa(Pessoa P) // declara o parâmetro como uma struct
{
  printf("Idade: %d  Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i,s,a;
    float p,alt;
    printf("quantas pessoas serão analizadas?: ");
    scanf("%i",&a);
    Pessoa Povo[a];
    s = 1;
    while(s<=a){
        printf("insira idade da %d° pessoa: ",s);
        scanf("%i",&i);
        Povo[s].Idade = i;
        printf("insira peso da %d° pessoa: ",s);
        scanf("%f",&p);
        Povo[s].Peso = p;
        printf("insira altura da %d° pessoa: ",s);
        scanf("%f",&alt);
        Povo[s].Altura = alt;
        printf("-----------------------------\n");
        s++;
    }
    s = 1;
    while(s<=a){
        ImprimePessoa(Povo[s]);
        s++;
    }
    // chama a função que recebe a struct como parâmetro
   return 0;
}
