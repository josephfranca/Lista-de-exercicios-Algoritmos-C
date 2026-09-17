#include <stdio.h>

int main(){
	int horas, minutos, total;
	
	printf("Digite as horas: \n");
	scanf("%d", &horas);
	
	printf("Digite os minutos \n");
	scanf("%d", &minutos);
	
	total = horas * 60 + minutos;
	printf("Ja se passaram %d Minutos", total);	
	
}

