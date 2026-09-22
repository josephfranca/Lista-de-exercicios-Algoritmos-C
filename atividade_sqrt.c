#include <stdio.h>
#include <math.h>

int main(){
	float x1, y1,x2,y2,distancia;
	
	printf("Digite a coordenada x1: \n");
	scanf("%f",&x1);
	
	printf("Digite a coordenada  y1: \n");
	scanf("%f",&y1);
	
	printf("Digite a coordenada  x2: \n");
	scanf("%f",&x2);
	
	printf("Digite a coordenada  y2: \n");
	scanf("%f",&y2);
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("A distancia entre os pontos: %2.f " , distancia);
	return 0;
	//José Leonardo Da Silva França
}
