#include <stdio.h>

// Função para exibir os nomes e idades
void exibir(char Nomes[2][100], int idade[2], int total) {
    for (int i = 0; i < total; i++) {
        printf("Nome: %s, Idade: %d anos\n", Nomes[i], idade[i]);
    }
}

int main() {
    char Nomes[2][100];  // Array bidimensional para armazenar até 2 nomes, com 100 caracteres cada
    int idade[2];        // Array para armazenar as idades dos alunos
    int i;
    int soma = 0;        // Variável para armazenar a soma das idades
    int quant; // Variável para armazenar a quantidade dos alunos
    
    // Solicitar a quantidade de alunos
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &quant);
    
    // Validar a quantidade de alunos
    if (quant < 1) {
        printf("Quantidade inválida. Tente novamente.\n");
        return 1;
    }


    // Coletar os nomes e as idades
    for (i = 0; i < quant; i++) {
        printf("Digite o nome do %dº aluno: ", i + 1);
        scanf("%s", Nomes[i]);
        
        printf("Digite a idade do %dº aluno: ", i + 1);
        scanf("%d", &idade[i]);

        // Acumular a soma das idades
        soma += idade[i];
    }

    // Calcular a média
    float media = (float)soma / quant;  // Casting para float para obter a média correta

    // Chamar a função para exibir os dados
    for (i = 0; i < quant; i++) {
     printf("Nome: %s, Idade: %d anos\n", Nomes[i], idade[i]);
    }

    // Exibir a média
    printf("A média das idades é: %.2f anos\n", media);

    return 0;
}
