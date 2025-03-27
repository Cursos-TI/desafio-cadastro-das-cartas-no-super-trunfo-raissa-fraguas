#include <stdio.h>


 int main(){
   char estado1, estado2, codigo [3], codigo2 [3], cidade [50], cidade2 [50];
   int populacao, populacao2, pontos, pontos2;
   float area, area2, PIB, PIB2;

     //dados  da primeira carta

     printf("Digite o caractere que representa o Estado da primeira carta: \n");
     scanf(" %c", &estado1);

     printf("Digite o numero que representa o codigo da primeira carta: \n");
     scanf(" %2s", codigo);

     printf("Digite a cidade representada na primeira carta: \n");
     getchar();
     fgets(cidade,sizeof(cidade), stdin);

     printf("Digite a populaçao da primeira carta: \n");
     scanf(" %d", &populacao);

     printf("Digite o numero de pontos da primeira carta: \n");
     scanf(" %d", &pontos);

     printf("Digite a area territorial da cidade representada na primeira carta: \n");;
     scanf(" %f", &area);

     printf("Digite o PIB da cidade representada na primeira carta: \n");
     scanf(" %f", &PIB);

     //dados da segunda carta

     printf("Digite o caractere que representa o Estado da segunda carta: \n");
     scanf(" %c", &estado2);

     printf("Digite o numero que representa o codigo da segunda carta: \n");
     scanf(" %2s", codigo2);

     printf("Digite a cidade representada na segunda carta: \n");
     getchar();
     fgets(cidade,sizeof(cidade2), stdin);

     printf("Digite a populaçao da segunda carta: \n");
     scanf(" %d", &populacao2);

     printf("Digite o numero de pontos da segunda carta: \n");
     scanf(" %d", &pontos2);

     printf("Digite a area territorial da cidade representada na segunda carta: \n");;
     scanf(" %f", &area2);

     printf("Digite o PIB da cidade representada na segunda carta: \n");
     scanf(" %f", &PIB2);

     //impressão na tela dos dados da primeira carta

     printf("Estado: %c \n", estado1);
     printf("Codigo: %2s \n", codigo, estado1);
     printf("Cidade: %s \n",cidade);
     printf("Populacao: %d \n", populacao);
     printf("Area: %.2f  \n", area);
     printf("PIB: %.2f \n", PIB);
     printf("Pontos: %d \n", pontos);


     printf("Estado: %c \n", estado2);
     printf("Codigo: %2s \n", codigo2, estado2);
     printf("Cidade: %s \n",cidade2);
     printf("Populacao: %d \n", populacao2);
     printf("Area: %.2f  \n", area2);
     printf("PIB: %.2f \n", PIB2);
     printf("Pontos: %d \n", pontos2);


   return 0;
   }
