#include <stdio.h>

int main(){
	float potencia, horas, consumo;
	
	printf("Digite a potencia \n");
	scanf("%f", &potencia);
	
	printf("Digite as horas consumidas \n");
	scanf("%f", &horas);
	
	consumo = (potencia*horas*30)/1000;
	printf("Consumo: %2.f \n", consumo);
}
