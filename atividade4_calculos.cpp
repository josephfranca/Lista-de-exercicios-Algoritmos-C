#include <stdio.h>

int main(){
	float num1,num2,soma,sub,multi;
	
	printf("Digite o primeiro valor\n");
	scanf("%f", &num1);
	
	printf("Digite o segundo valor\n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	
	printf("Soma: %2.f \n", soma);
	printf("Subtracao: %2.f \n", sub);
	printf("multiplicacao: %2.f \n", multi);
	
	return 0;
	
}
