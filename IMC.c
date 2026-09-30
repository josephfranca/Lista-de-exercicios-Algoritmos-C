#include <stdio.h>


int main(){
    //Preparando as variáveis
    float peso, altura, imc;

    //Capturando os dados
    printf("Digite o seu peso: \n");
    scanf("%f", &peso);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    //Fazendo o calculo 
    imc = peso / (altura * altura);

    //Decisões 
    if(imc <= 20){
        printf("Abaixo do peso ideal \n");
        
    }

    if(imc >= 20 && imc <= 24.9){
        printf("Peso normal\n");
      
    }

    if(imc >= 25 && imc <= 29.9){
        printf("Sobrepesol\n");
       
    }

    if(imc >= 30 && imc <= 39.9){
        printf("Obeso\n");
      
    }

    if(imc >= 40){
        printf("Obeso mórbido\n");
       
    }
    printf("Seu IMC é: %.2f\n", imc);
    return 0;

    //José Leonardo Da Silva França
}