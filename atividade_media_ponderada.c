//Desenvolva um algoritmo que leia duas notas de um aluno e um caractere indicando o tipo de
//média que deverá ser calculada: A ? média aritmética; P ? média ponderada. Caso seja escolhida
//a opção P, calcule a média ponderada utilizando os pesos 3 para a primeira nota e 7 para a segunda.
//Ao final, exiba o valor da média calculada

#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char tipo;

    printf("Tipo de media (A - P)? ");
    scanf(" %c", &tipo);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    switch (tipo) {
        case 'A':
        case 'a':
            media = (nota1 + nota2) / 2;
            break;

        case 'P':
        case 'p':
            media = (nota1 * 3 + nota2 * 7) / 10;
            break;

        default:
            printf("Tipo de media invalido!\n");
            return 1;
    }

    printf("Media calculada: %.1f\n", media);

    return 0;
}
