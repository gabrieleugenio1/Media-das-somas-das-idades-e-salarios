#include <stdio.h>
#include "function.h"
/*Faça um programa que leia n pessoas solicitando dados como:idade,salário
armazenando em vetores e que mostre a media de idade e salario*/

int main(void) {
  int escolha,quantidade;
  printf("Quantidade máxima: 100\n");
  printf("Quantidade de idades e salário que deseja inserir: ");
  scanf("%d", &quantidade);
  calcular(quantidade);  
  menu(escolha);
  scanf("%d", &escolha);
  return 0;
}