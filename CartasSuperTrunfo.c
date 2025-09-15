#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char nomeCidade[50];
  int populacao;
  float area;

  // Área para entrada de dados
  printf("Digite o nome da cidade: ");
  fgets(nomeCidade, sizeof(nomeCidade), stdin);
  nomeCidade[strcspn(nomeCidade, "\n")] = '\0'; // Remove o caractere de nova linha

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area);

  // Área para exibição dos dados da cidade
  printf("\nInformações da cidade:\n");
  printf("Nome: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);

  return 0;
}


