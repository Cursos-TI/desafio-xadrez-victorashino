#include <stdio.h>

void torre(int num) {
  
  if (num > 0) {
    printf("Direita\n");
    torre(--num);
  }
}

void bispo(int num) {

  for (int i = 0; i < num; i++) {
    printf("Cima\n");
    printf("Direita\n");
  }
}

void rainha(int num) {
  
  if (num > 0) {
    printf("Esquerda\n");
    rainha(--num);
  }
}

void cavalo(int num) {

  if (num > 0) {
    for (int i = 0; i < 3; i++) {
      printf("Cima\n");
    }
    printf("Direita\n");
    cavalo(--num);
  }
}

int main() {

  int numeroDeCasasParaTorre = 5;
  printf("##### Torre #####\n");
  torre(numeroDeCasasParaTorre);

  int numeroDeCasasParaBispo = 5;
  printf("\n##### Bispo #####\n");
  bispo(numeroDeCasasParaBispo);

  int numeroDeCasasRainha = 8;
  printf("\n##### Rainha #####\n");
  rainha(numeroDeCasasRainha);

  int numeroDeCasasCavalo = 1;
  printf("\n##### Cavalo #####\n");
  cavalo(numeroDeCasasCavalo);

  return 0;
}
