#include <stdio.h>
	int main() {
		int num;
		
		printf("Insira um numero de 1 a 7 para os dias da semana (com a semana iniciando em Domingo): ");
		scanf("%d", &num);
		
		switch(num) {
			case 1: printf("Domingo!");
			break;
			case 2: printf("Segunda!");
			break;
			case 3: printf("Terca!");
			break;
			case 4: printf("Quarta!");
			break;
			case 5: printf("Quinta!");
			break;
			case 6: printf("Sexta!");
			break;
			case 7: printf("Sabado!");
			break;
			default: printf("Numero Invalido!");
		}
	}
