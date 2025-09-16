#include <stdio.h>
#include <string.h>
#include <locale.h>
#ifdef _WIN32
#include <windows.h> // Biblioteca para configurar saída UTF-8 no Windows
#endif

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Configura o programa para usar UTF-8
  setlocale(LC_ALL, "pt_BR.UTF-8");

#ifdef _WIN32
  // Configura o console do Windows para usar UTF-8
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8); // Configura a entrada do console para UTF-8
#endif

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado; // Estado representado por uma letra de 'A' a 'H'
  int codigoCarta; // Código da carta de '01' a '04'
  char nomeCidade[50];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;


  

  // Área para entrada de dados
  printf("Digite o nome da cidade: ");
  fgets(nomeCidade, sizeof(nomeCidade), stdin);
  nomeCidade[strcspn(nomeCidade, "\n")] = '\0'; // Remove o caractere de nova linha

  printf("Digite a letra do estado (A-H): ");
  scanf(" %c", &estado);

  printf("Digite o código da carta (de 01 a 04): ");
  scanf("%d", &codigoCarta);

  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao);

  printf("Digite a area da cidade (em km²): ");
  scanf("%f", &area);

  printf("Digite o PIB da cidade (em R$): ");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &pontosTuristicos);

  

  // Área para exibição dos dados da cidade
  
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);  
  printf("Código: %c%02d\n", estado, codigoCarta);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f km²\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Pontos Turisticos: %d\n", pontosTuristicos);

  return 0;
}
