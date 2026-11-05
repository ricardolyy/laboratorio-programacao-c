#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], codigo[10], copia[50], mensagem[100];
    char curso[50];

    printf("Digite o primeiro nome do estudante: ");
    scanf("%49s", nome);
    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    if (strcmp(codigo, "CC") == 0) {
        strcpy(curso, "Ciencia da Computacao");
    } else if (strcmp(codigo, "SI") == 0) {
        strcpy(curso, "Sistemas de Informacao");
    } else {
        printf("Codigo de curso invalido!\n");
        return 1;
    }

    strcpy(copia, nome);

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\nNome: %s\n", nome);
    printf("Caracteres no nome: %d\n", (int)strlen(nome));
    printf("Curso: %s\n", curso);
    printf("%s\n", mensagem);

    return 0;
}
