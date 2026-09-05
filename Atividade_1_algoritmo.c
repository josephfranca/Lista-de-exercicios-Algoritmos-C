#include <stdio.h>

int main(){
    //    ////Desenvolva um programa em Portugol e em C que leia: (i) quantidade de caf�s; (ii) pre�o unit�rio.
  //Calcule o valor total da compra e apresente o resultado.
  
  int cafeQuantidade;
  float valorTotal, precoUnitario;
  
  printf("Digite a quantidade de cafe servido: \n");
  scanf("%d", &cafeQuantidade);
  
  printf("Digite o valor unitario do cafe: \n");
  scanf("%f", &precoUnitario);
  
  valorTotal = cafeQuantidade * precoUnitario;
  
   printf("Resultado: R$ %.2f\n", valorTotal);
  
  return 0;
  //José Leonardo Da Silva França
    }

