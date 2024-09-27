#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define TAMANHO_SENHA 5 // defina o tamanho da senha

char* gerar_senha() {
    char* senha = malloc(TAMANHO_SENHA + 1); // alocar memória para a senha
    for (int i = 0; i < TAMANHO_SENHA; i++) {
        senha[i] = 'a' + rand() % 26; // gerar caractere aleatório
    }
    senha[TAMANHO_SENHA] = '\0'; // terminar a string com '\0'
    return senha;
}

int main() {
    srand(time(NULL)); // inicializa a semente para rand()
    char* senha = gerar_senha();
    int tentativas = 0;
    int acertos = 0;
    char chute[TAMANHO_SENHA + 1];

    while (tentativas < 5) {
        printf("Tente adivinhar a senha: ");
        scanf("%s", chute);
        if (strcmp(chute, senha) == 0) {
            acertos++;
            break;
        } else {
            printf("Você não acertou a senha!!!\n");
            tentativas++;
            gerar_senha();
        }
    }

    printf("Senha correta: %s\n", senha); // mostra a senha correta no final
    free(senha); // libera a memória alocada para a senha
    return 0;
}