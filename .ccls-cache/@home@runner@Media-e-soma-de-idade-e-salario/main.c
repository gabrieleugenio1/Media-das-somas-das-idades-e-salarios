#include <stdbool.h>
#include <stdio.h>
#include "function.h"
/*Faça um programa que leia n pessoas solicitando dados como:idade,salário
armazenando em vetores e que mostre a media de idade e salario*/

int main(void) {
  int escolha,quantidade, i=0;
  float idadeTotal,salarioTotal,salarioMedia,idadeMedia;
  int idade[102];
  float salario[102];
  printf("Quantidade máxima: 100\n");
  printf("Quantidade de idades e salário que deseja inserir: ");
  scanf("%d", &quantidade);

  
    system("clear");
    while (true) {
      limpeza();
      printf("1.Visualizar a soma\n2.Visualizar a média\n3.Visualizar cada "
             "separadamente\n4.Sair\n5.Limpar tela\nEscolha: ");
      scanf("%d", &escolha);
      limpeza();
      printf("\n");
      
      if (escolha == 1) {
        printf("A soma das idades é: %.0f\n", idadeTotal);
        printf("A soma dos salários é: %.2f\n\n", salarioTotal);
      } else if (escolha == 2) {
        printf("A média de idades é: %.2f\n", idadeMedia);
        printf("A média dos salários é: %.2f\n\n", salarioMedia);
      } else if (escolha == 3) {
        for (i = 0; i < quantidade; i++) {
          printf("Idade: %d\n", idade[i]);
          printf("Salario: %.2f\n\n", salario[i]);
        };
      } else if (escolha == 4) {
        break;
      }else if(escolha == 5){
        system("clear");
      } else {
        printf("Invalido\n\n");
      }
    }
  }
  return 0;
}