#include <stdio.h>
  int valorQuantidade=0, i=0;
  float idadeTotal,salarioTotal,salarioMedia,idadeMedia;
  int idade[102];
  float salario[102];
void organizar(){
  printf("************************************\n");
}

void calcular(quantidade){
  valorQuantidade=quantidade;
   if (quantidade > 100) {
    printf("Não tem como inserir{%d}", quantidade);
  } else if (quantidade <= 0) {
    printf("Não tem como inserir{%d}", quantidade);
  } else {
    for (; i < quantidade; i++) {
      printf("Insira a idade: ");
      scanf("%d", &idade[i]);
      printf("Insira o salário: ");
      scanf("%f", &salario[i]);
    };
    printf("\n\n");
    for (i = 0; i < quantidade; i++) {
      idadeTotal += idade[i];
      salarioTotal += salario[i];
    }
    idadeMedia = idadeTotal / quantidade;
    salarioMedia = salarioTotal / quantidade;

    system("clear");

  }
  }

void menu(escolha){
      while (true) {
      organizar();
      printf("1.Visualizar a soma\n2.Visualizar a média\n3.Visualizar cada "
             "separadamente\n4.Sair\n5.Limpar tela\nEscolha: ");
      scanf("%d", &escolha);
      organizar();
      printf("\n");
      
      if (escolha == 1) {
        printf("A soma das idades é: %.0f\n", idadeTotal);
        printf("A soma dos salários é: %.2f\n\n", salarioTotal);
      } else if (escolha == 2) {
        printf("A média de idades é: %.2f\n", idadeMedia);
        printf("A média dos salários é: %.2f\n\n", salarioMedia);
      } else if (escolha == 3) {
        for (i = 0; i < valorQuantidade; i++) {
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