#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
  char EstadoA[20] = "Para";
  char EstadoB[20] = "Tocantins";

  char CodigoCartaA1[20] = "A01";
  char CodigoCartaB1[20] = "B01";

  char NomeCidadeA01[20] = "Uruara";
  char NomeCidadeB01[25] = "Luzinopolis";

  unsigned long int PopulacaoA01 = 43110;
  unsigned long int PopulacaoB01 = 24654;

  float AreaA01 = 10791.54;
  float AreaB01 = 282;

  float PibA01 = 110000000.00;
  float PibB01 = 58000000.00;

  int TurismoA01 = 16;
  int TurismoB01 = 12;
  
  char confirmacao[10];

  float Densidade1, Densidade2, SuperPoder, SomaA01, SomaB01;
  float PibC1, PibC2;

  int Resultado;
    
 // Calculo de Densidade, PIB per Capita e Soma total dos atributos
  Densidade1 = (PopulacaoA01/AreaA01);
  Densidade2 = (PopulacaoB01/AreaB01);
  PibC1 = (PibA01/PopulacaoA01);
  PibC2 = (PibB01/PopulacaoB01);
  SuperPoder = SomaA01, SomaB01;
  SomaA01 = ((float)PopulacaoA01 + AreaA01 + PibA01 + TurismoA01 + (1/Densidade1) + PibC1);
  SomaB01 = ((float)PopulacaoB01 + AreaB01 + PibB01 + TurismoB01 + (1/Densidade2) + PibC2);
  Resultado = SomaA01 > SomaB01;


  // Área para exibição dos dados da cidade
  printf("Cartas: \n\n");

  printf("Codigo: %s\n", CodigoCartaA1);
  printf("Estado: %s\n", EstadoA);
  printf("Cidade: %s\n", NomeCidadeA01);
  printf("Populacao: %d habitantes\n", PopulacaoA01);
  printf("Area em Km2: %.2f Km²\n", AreaA01);
  printf("PIB: %.2f bilhoes de reais\n", PibA01);
  printf("Pontos Turisticos: %d\n", TurismoA01);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
  printf("PIB per Capita: %.2f reais\n", PibC1);
  printf("Super Poder: %.2f \n\n", SomaA01);

  printf("Codigo: %s\n", CodigoCartaB1);
  printf("Estado: %s\n", EstadoB);
  printf("Cidade: %s\n", NomeCidadeB01);
  printf("Populacao: %d habitantes\n", PopulacaoB01);
  printf("Area em Km2: %.2f Km²\n", AreaB01);
  printf("PIB: %.2f milhoes de reais\n", PibB01);
  printf("Pontos Turisticos: %d\n", TurismoB01);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
  printf("PIB per Capita: %.2f reais\n", PibC2);
  printf("Super Poder: %.2f \n\n", SomaB01);

  //Inserção da estrutura de decisão para teste de comparação

  printf("LOGICA DE DECISAO\n\n");

  printf("Comparacao entre populacao\n\n\b");
if (PopulacaoA01 > PopulacaoB01){
  printf("A populacao da carta A01, cidade de Uruara-PA (%u) e maior que a populacao da carta B01, Luzinopolis-TO (%u)\n\n", PopulacaoA01, PopulacaoB01);
}  else{
  printf("A populacao da carta B01, cidade de Luzinopolis-TO(%u) e maior que a populacao da carta A01, Uruara-PA (%u)\n\n", PopulacaoB01, PopulacaoA01);
}
  printf("Comparacao entre a soma de todos os atributos\n\n\b");
if (SomaA01 > SomaB01){
  printf("A Soma de todos os atributos da carta A01 (%.2f) e maior que a soma de todos os atributos de B01 (%.2f),\n portanto A01 e a carta vencedora!\n\n", SomaA01, SomaB01);
} else {
  printf("A Soma de todos os atributos da carta B01 (%.2f) e maior que a soma de todos os atributos de A01 (%.2f),\n portanto B01 e a carta vencedora!\n\n", SomaB01, SomaA01);
}

  return 0;
} 

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


