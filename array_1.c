#include <stdio.h>

int main(){
	// Desenvolva um programa em C que leia o salario de 4 funcionários, armazene os valores em um array e exiba na mesma ordem que foram digitados
	
	//Criando o array e definindo o seu tamanho, coloquei zerado o elemento para que possa adicionar sem problemas os valores que quero
	int arr[4] = {0};
	
	//Salvando os valores de acordo com as posições
	printf("Digite o primeiro salario: ");
	scanf("%d", &arr[0]);
	
	printf("Digite o segundo salario: ");
	scanf("%d", &arr[1]);
	
	printf("Digite o terceiro salario: ");
	scanf("%d", &arr[2]);
	
	printf("Digite o quarto salario: ");
	scanf("%d", &arr[3]);
	
	//Precisei declarar o i fora do loop, estava dando erro sobre nao ter sido declarado anteriormente
	int i;
	
	//Percorrendo o array pra pegar e exibir o valor onde esta passando o contador do laço
	for(i = 0; i < 4; i++) {
		printf("O salario desse funcionario e: %d\n", arr[i]);
		
	}
	
	return 0;
	
	
}
