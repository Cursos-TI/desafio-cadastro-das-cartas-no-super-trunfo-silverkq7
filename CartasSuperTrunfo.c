#include <stdio.h>
//Teste Vinicius

int main() {
   char estadoA='A',estadoB='B';
   char codigodacidadeA[30]="A08",codigodacidadeB[30]="B07";
   int populacaoA=3452402,populacaoB= 9809680;
   float AreaemKmA= 6576437,AreaemKmB=3433243;
   float PibA= 476656.89,PibB=43463.83;
   int Pontos_TuristicoA=13,Pontos_TuristicoB=9;

    printf("Desafio carta super trunfo!\n");
    printf("Carta01 :\n");
    printf("Estado :%c\n",estadoA);
    printf("Codigo da cidade :%s\n",codigodacidadeA);
    printf("Populacao :%d\n", populacaoA);
    printf("Area em Km²:%f\n",AreaemKmA);
    printf("Pib da cidade: %f\n", PibA);
    printf("Pontos Turisticos: %d\n",Pontos_TuristicoA);
    

    printf("Carta02 : \n");
    printf("Estado: %c\n",estadoB);
    printf("Codigo da cidade :%s\n",codigodacidadeB);
    printf("Populacao :%d\n",populacaoB);
    printf("Area em km² :%f\n",AreaemKmB);
    printf("Pib da Cidade :%f\n",PibB);
    printf("Pontos Turistico :%d\n",Pontos_TuristicoB);
    

    return 0;
}

