#include <stdio.h>

int main() {

  int numeroDeCasasParaTorre = 5;


  printf("\n##### Torre #####\n");
  for (int i = 0; i < numeroDeCasasParaTorre; i++) {
    printf("Direita\n");
  }

  int numeroDeCasasParaBispo = 5;

  printf("\n##### Bispo #####\n");
  while (numeroDeCasasParaBispo > 0) {
    
    printf("Cima\n");
    printf("Direita\n");
    --numeroDeCasasParaBispo;
  }

  int numeroDeCasasRainha = 8;

  printf("\n##### Rainha #####\n");
  do {
    printf("Esquerda\n");
    --numeroDeCasasRainha;
  } while (numeroDeCasasRainha > 0);
}
