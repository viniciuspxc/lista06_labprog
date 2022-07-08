#include <stdio.h>
#include <stdlib.h>

struct Estoque {
  char *nomepeca;
  int numero;
  float preco;
  int numeropedido;
};

int main() {
  struct Estoque item;
  item.nomepeca = "Peça";
  item.numero = 5;
  item.preco = 230.5;
  item.numeropedido = 1;

  printf("%s, %d, %.2f, %d", item.nomepeca, item.numero, item.preco,
         item.numeropedido);
  return 0;
}