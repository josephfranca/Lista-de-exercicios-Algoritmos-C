#include <stdio.h>

int main(){
    //     ler tipo de diaria
    // ler quantidade de diaria

    // Simples(S) 300
    // Duplo(D) 450
    // Triplo(T) 500
    // se for inexistente exibir tipo invalido

    int  quantidadeDiaria, valorTotal;
    char tipoDiaria;

    printf("Escolha o tipo de diaria: \n");
    printf("Simples (S) 300 \n");
    printf("Duplo (D) 450 \n");
    printf("Triplo (T) 500 \n");
    printf("Digite a inicial da opcao que deseja: ");

    scanf("%c", &tipoDiaria);

    printf("Digite a quantidade de dias que ficara em nosso hotel: \n" );
    scanf("%d", &quantidadeDiaria);

    if(tipoDiaria == 'S'){
       valorTotal = quantidadeDiaria * 300;
        printf("O valor de sua estadia e de: %.2d \n", valorTotal);
    }else if(tipoDiaria == 'D'){
        valorTotal = quantidadeDiaria * 450;
        printf("O valor de sua estadia e de: %.2d \n", valorTotal);

    }else if(tipoDiaria == 'T'){
        valorTotal = quantidadeDiaria * 500;
        printf("O valor de sua estadia e de: %.2d \n", valorTotal);
    }else{
        printf("Tipo invalido\n");
    }
    return 0;
    //José Leonardo Da Silva França

}