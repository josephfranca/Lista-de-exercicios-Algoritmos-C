//Desenvolva um programa em C que leia o código correspondente ao tipo de diária e a
//quantidade de diárias desejada pelo cliente. Considere as seguinte categorias com seus respectivos
//valores: Simples (S) - R$ 300,00; Duplo (D) - R$ 450,00; e Triplo (T) – R$ 500,00. Calcule e exiba o
//valor total da hospedagem. Ao ser informado um código inexistente exiba a mensagem: Tipo
//inválido!!!

#include <stdio.h>

char tipoHospedagem;
int diaria,valorTotal;

int main(){
	printf("Escolha o tipo de diaria: \n");
    printf("Simples (S) 300 \n");
    printf("Duplo (D) 450 \n");
    printf("Triplo (T) 500 \n");
    printf("Digite a inicial da opcao que deseja: ");
    
    scanf("%c", &tipoHospedagem);
    
printf("Digite a quantidade de dias que ficará hospedado: ");
scanf("%d", &diaria);

	switch(tipoHospedagem){
		case 's':
		case 'S':
			valorTotal = diaria * 300;	
		break;
		case 'd':
		case 'D':
		 valorTotal = diaria * 450;	
		break;
		case 't':
		case 'T':
		 valorTotal = diaria * 500;	
		break;
		default:
			printf("Opcao invalida");
	}
	 printf("Valor total da hospedagem: R$ %d\n", valorTotal);
	return 0;
}


