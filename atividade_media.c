#include <stdio.h>

int main(){
	float n1,n2,n3,media;
	printf("Digite a primeira nota: \n");
	scanf("%f",&n1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f",&n2);
	
	
	printf("Digite a terceira nota: \n");
	scanf("%f",&n3);
	
	media = (n1 *1 + n2*2 + n3*4)/7;
	
	printf("A média de notas é: %2.f " , media);
	
	return 0;
	//José Leonardo Da Silva França
}
