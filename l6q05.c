#include <stdio.h>
#include <stdlib.h>

struct Professor {
  char *nome;
  char *formacao;
};

struct Disciplina {
  char *nome;
  int cargahr;
  struct Professor p;
};

int main() {
  struct Disciplina math;
  math.nome = "Matematica";
  math.cargahr = 60;
  math.p.nome = "Newton";
  math.p.formacao = "Licenciatura em Matematica";

  printf("Disciplina de %s, com %d hr, pelo Prof. %s, formado em %s\n",
         math.nome, math.cargahr, math.p.nome, math.p.formacao);

  return 0;
}