#include <stdio.h>

int main() {
  int idade = 20;
  // Inteiros (sem vírgula). Ex: 1, 20, -5, 1000.
  float altura = 1.75;
  // Guarda números com vírgula/decimais, mas com precisão menor. Bom para temperatura, etc.
  double peso = 70.5;
  // Mais precisão decimal
  char letra = 'A';
  // Guarda um único caractere. Sempre entre aspas simples ' '.
  unsigned int positivo = 300;
  // O unsigned significa sem sinal, ou seja, aceita positivos só. Mas em troca, o valor máximo é maior.

  printf("idade %d\n", idade);
  printf("altura %f\n", altura);
  printf("peso %lf\n", peso);
  printf("letra %c\n", letra);
  printf("positivo %u\n", positivo);

  return 0;
}