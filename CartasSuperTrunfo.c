#include <stdio.h>
//Teste Vinicius
//Nivel Novato
int main() {
   char estadoA,estadoB;
   char Nome_da_CidadeA[20]="Sao Paulo",Nome_da_CidadeB[20]="Rio de janeiro";
   char codigodacidadeA[20]= "A08",codigodacidadeB[20]= "B07";
   int populacaoA = 1232.500,populacaoB =6748.000;
   float AreaemKmA = 1521.11,AreaemKmB = 1200.25;
   float PibA = 699.28,PibB = 300.50;
   int Pontos_TuristicoA = 30,Pontos_TuristicoB = 20;

//Nivel Aventureiro:
   float Densidade_da_populacaoA=populacaoA/AreaemKmA, Densidade_da_populacaoB=populacaoB/AreaemKmB;
   float pib_per_CapitaA=PibA/populacaoA,pib_per_CapitaB=PibB/populacaoB;

   // Nivel Mestre:
   //Calcular a Densidade Populacional e o PIB per Capita: 
float Resultado = Densidade_da_populacaoA+Densidade_da_populacaoB+pib_per_CapitaA+pib_per_CapitaB;

//Calcular o Super Poder cartaA: 
float SuperpoderA =populacaoA+AreaemKmA+PibA+Pontos_TuristicoA+pib_per_CapitaA/Densidade_da_populacaoA;

//Calcular o Super Poder cartaB: 
float SuperpoderB =populacaoB+AreaemKmB+PibB+Pontos_TuristicoB+pib_per_CapitaB/Densidade_da_populacaoB;

//Comparar as Cartas:
int ResultadoP= populacaoA>populacaoB;
int ResultadoAr= AreaemKmA>AreaemKmB;
int ResultadoPib=PibA>PibB;
int ResultadoPT=Pontos_TuristicoA>Pontos_TuristicoB;
int ResultadoD=Densidade_da_populacaoA<Densidade_da_populacaoB;
int ResultadoPPC=pib_per_CapitaA>pib_per_CapitaB;
int ResultadoSP= SuperpoderA>SuperpoderB; 


// Inserir dados das cartas:
scanf("%c\n",&estadoA,&estadoB);

printf("Desafio carta super trunfo!\n");

//Exibir informaçoes da carta 1:
/*  printf("Carta01 :\n");
    printf("Estado :%c\n",estadoA);
    printf("Nome da Cidade :%s\n", Nome_da_CidadeA);
    printf("Codigo da cidade :%s\n",codigodacidadeA);
    printf("Populacao :%d\n", populacaoA);
    printf("Area em Km²:%f\n",AreaemKmA);
    printf("Pib da cidade: %f\n", PibA);
    printf("Pontos Turisticos: %d\n",Pontos_TuristicoA);
    printf("Densidade da populacao: %.2f\n", Densidade_da_populacaoA,"Hab/Km²");
    printf("PIB per Capita : %.2f\n", pib_per_CapitaA,"Reais");
    printf("Super poder carta A : %f\n",SuperpoderA);/*
    
//Exibir informaçoes da carta 2:
    /*printf("Carta02 : \n");
    printf("Estado: %c\n",estadoB);
    printf("Nome da Cidade :%s\n", Nome_da_CidadeB);
    printf("Codigo da cidade :%s\n",codigodacidadeB);
    printf("Populacao :%d\n",populacaoB);
    printf("Area em km² :%f\n",AreaemKmB);
    printf("Pib da Cidade :%f\n",PibB);
    printf("Pontos Turistico :%d\n",Pontos_TuristicoB);
    printf("Densidade da populacao: %.2f\n", Densidade_da_populacaoB,"Hab/Km²");
    printf("PIB per Capita : %.2f\n", pib_per_CapitaB,"Reais");
    printf("Super poder carta B : %f\n",SuperpoderB);*/

    //Saida da Comparaçao:
    printf("Comparaçao das cartas :\n");

    printf("Carta que venceu (B) :%d\n",ResultadoP);
    printf("Carta que venceu (A) :%d\n",ResultadoAr);
    printf("Carta que venceu (A) :%d\n",ResultadoPib);
    printf("Carta que venceu (A) :%d\n",ResultadoPT);
    printf("Carta que venceu (A) :%d\n",ResultadoD);
    printf("Carta que venceu (A) :%d\n",ResultadoPPC);
    printf("Carta que venceu (B) :%d\n",ResultadoSP);

    return 0;
}