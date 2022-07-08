#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

struct Vetor {
  int *n, qnt;
  float media;
};

int main() {
  srand(time(NULL));
  struct Vetor x;
  x.qnt = TAM;
  x.n = (malloc(x.qnt * sizeof(int)));

  x.media = 0;
  for (int i = 0; i < x.qnt; i++) {
    *(x.n + i) = rand() % 100;
    printf("%d ", *(x.n + i));
    x.media += *(x.n + i);
  }
  x.media = (float)x.media / x.qnt;

  printf("\n\nMedia: %.2f ", x.media);

  return 0;
}