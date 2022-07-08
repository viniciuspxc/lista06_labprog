#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define QNT 3

struct Aluno {
  int n1, n2;
  float media;
};

void calcularmedia(struct Aluno *a) { a->media = (a->n1 + a->n2) / 2; }

int main() {
  struct Aluno *a;
  srand(time(NULL));
  a = malloc(QNT * sizeof(struct Aluno));

  for (int i = 0; i < QNT; i++) {
    (a + i)->n1 = rand() % 100;
    (a + i)->n2 = rand() % 100;
    calcularmedia(a + i);
    printf("Media %d: %.2f\n", i, (a + i)->media);
  }

  return 0;
}