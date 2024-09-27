#include <stdio.h>

char nome[50];
int idade;

int main() {
 printf("Qual seu nome: \n");
 fgets(nome, sizeof(nome), stdin);

 printf("Qual sua idade: \n");
 scanf("%d", &idade);

 printf("Seu nome e: %s", nome);
 printf("Sua Idade e: %d", idade);
 
 return 0;
}
