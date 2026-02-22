#include <stdio.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    struct Territorio territorios[5];

    printf("=== Sistema de Cadastro de Territorios ===\n");

    for (int i = 0; i < 5; i++) {

        printf("\n--- Cadastro do Territorio %d ---\n", i + 1);

        printf("Nome do territorio: ");
        fgets(territorios[i].nome, 30, stdin);

        for (int j = 0; j < 30; j++) {
            if (territorios[i].nome[j] == '\n') {
                territorios[i].nome[j] = '\0';
                break;
            }
        }

        printf("Cor do exercito: ");
        fgets(territorios[i].cor, 10, stdin);

        for (int j = 0; j < 10; j++) {
            if (territorios[i].cor[j] == '\n') {
                territorios[i].cor[j] = '\0';
                break;
            }
        }

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); 
    }

    printf("\n=== Territorios Cadastrados ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
