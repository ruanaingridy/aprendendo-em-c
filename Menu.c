#include <stdio.h>
	int main() {
		int a, b, soma, subtracao, multiplicacao, menu;
		double divisao;
		
		printf("Escolha uma opção do menu (1_Soma 2_Subtracao 3_ Multiplicacao 4_Divisao): ");
		scanf("%d", &menu);
		
		if (menu<=4) {
		
		printf("Escolha dois numeros inteiros: ");
		scanf("%d  %d", &a, &b);
		
		switch(menu) {
			case 1: printf("A soma dos numeros e: %d", soma=a+b);
			break;
			case 2: printf("A subtracao dos numeros e: %d", subtracao=a-b);
			break;
			case 3: printf ("A multiplicacao dos numeros e: %d", multiplicacao=a*b);
			break;
			case 4: printf("A divisa dos numeros e: %lf", divisao=(double)a/b);
			break;
		} 
		
		} else {
			printf("Opcao invalida!");
		}
	}
