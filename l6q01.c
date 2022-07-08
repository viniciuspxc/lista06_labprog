#include <stdio.h>
#include <stdlib.h>

struct Aluno {
  int n1, n2;
  float media;
};

int main() {
  struct Aluno a1;
  a1.n1 = 5;
  a1.n2 = 6;

  a1.media = (a1.n1 + a1.n2) / 2;

  printf("%.2f", a1.media);
  return 0;
}