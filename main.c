#include <stdio.h>
#include <stdlib.h>

int main(){
  
  char nome[40]; //String - varios caracteres
  int idade;
  float salario, salariofinal; //com casa decimal
  
  printf("Digite seu nome completo: ");
  scanf(" %s", &nome);
  
  printf("Digite sua idade: ");
  scanf(" %d", &idade);
  
  printf("Digite seu salário: ");
  scanf("%f", &salario);

  salariofinal = salario * 1.3;
  
  printf(" %s sua idade é de %d anos, e seu salário com aumento é de %f", nome, idade, salariofinal);
  
  return 0;
}