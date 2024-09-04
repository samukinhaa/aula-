#include <stdio.h>

int main() {
  int numero = 0;

  printf("Digite outra número:");
  int deu_certo = scanf("%i", &numero);

  printf("Você digitou: %i\n", numero);
  printf("Você digitou %i\n", deu_certo);

  getchar();//limpar nome
  char nome[31];
  printf("Entre com um nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Você digitou: %s\n", nome);



  return 0;
}