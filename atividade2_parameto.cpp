#include <stdio.h>

int main(){
	float ladoA,ladoB,perim,area;
	
	printf("Digite o valor de um lado em cm: \n");
	scanf("%f", &ladoA);
	
	printf("Digite o valor do outro lado em cm: \n");
	scanf("%f", &ladoB);
	
	perim = 2*ladoA + 2*ladoB;
	printf("Perimetro =  %2.f  cm \n", perim);
	
	area = ladoA * ladoB;
	
	printf("área do retangulo= %2.f cm \n", area);
	return 0;
}
