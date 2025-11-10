#include <stdio.h>

int main(){

  // variaveis de movimentacao das pecas
  int mov_torre,mov_bispo,mov_rainha, a, b, c;
  char sentido[2], direcao[2];

  // mover a torre ate 5 casas para direita
  printf("Escolha um numero ate 5 para mover a torre para a direita: \n");

  scanf("%d",&mov_torre);

  while (a < mov_torre) {

    printf("Torre: Direita\n");
    a++;
  }

  //mover o bispo ate 5 casas na diagonal
  printf("Escolha um numero ate 5 para mover o bispo para a diagonal cima, direita: \n");
  scanf("%d",&mov_bispo);
  
  for (b=1;b<=mov_bispo;b++) {
  
  printf("Bispo: Direita, Cima\n");
  }
  
  //mover a rainha ate 8 casas para esquerda

  printf("Escolha um numero ate 8 para mover a rainha para a esquerda: \n");
  scanf("%d",&mov_rainha);
  
  do {
    printf("Rainha: Esquerda\n");
    c++;
  } while (c < mov_rainha);
  
  // movimentacao do cavalo
  
  printf("Escolha o movimento do cavalo para direita (d) ou esquerda (e): \n");
  scanf("%s",&sentido);

  if (sentido[0] == 'd') {
    for (int i=0; i < 1; i++) {
      for (int j=0; j<2; j++) {
        printf("Cavalo: Cima\n");
      }
    printf("Cavalo: Direita\n");
    }
  } else {
    for (int i=0; i < 1; i++) {
      for (int j=0; j<2; j++) {
        printf("Cavalo: Cima\n");
      }
    printf("Cavalo: Esquerda\n");
    }

  }
  return 0;
  }
