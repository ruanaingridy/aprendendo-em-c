#include <stdio.h>
	int main() {
		int a, b;
		
		printf("Digite o primeiro numero: ");
		scanf("%d", &a);
		printf("Digite o segundo numero: ");
		scanf("%d", &b);
		
		if (a==b) {
			printf("Numeros iguais!!!");
		} 
		
		else {
			if (a>b) {
				printf("O numero maior eh %d\n",a);
			} else {
				printf("O numero maior eh %d\n",b);
			}
		}
	}
