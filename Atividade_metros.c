#include <stdio.h>
#include <math.h>

int main(){
	float largura, comprimento, valor_caixa, area, caixas_quantidade, custo_total ;
	printf("Qual é a largura da area (em metros)? \n");
	scanf("%f", &largura);
	
	printf("Qual é o comprimento (em metros)? \n");
	scanf("%f", &comprimento);
	
	printf("Qual é o valor de cada caixa? \n");
	scanf("%f", &valor_caixa);
	
	area = largura * comprimento;
	caixas_quantidade = (area / 2.5);
	custo_total = caixas_quantidade * valor_caixa;
	
	printf("Area total: %.2f m²\n", area);
	printf("Quantidade de caixas: %.0f\n", caixas_quantidade);
	printf("Custo total: R$ %.2f\n",custo_total);
	
	return 0;
}
