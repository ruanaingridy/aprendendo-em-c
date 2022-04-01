#include <stdio.h>
	int main() {
		float base_A, base_B, altura_A, altura_B, area_A, area_B;
		
		printf("Base do retangulo A:\n");
		scanf("%f", &base_A);
		printf("Altura do retangulo A:\n");
		scanf("%f", &altura_A);
		
		printf("Base do retangulo B:\n");
		scanf("%f", &base_B);
		printf("Altura do retangulo B:\n");
		scanf("%f", &altura_B);
		
		area_A=base_A*altura_A;
		area_B=base_B*altura_B;
	
		if(base_A==altura_A || base_B==altura_B) {
			printf("Os dados informados nao formam o retangulo A ou o retangulo B!\n");
		}	
		
		else {
			if (area_A==area_B) {
				printf("Os retangulos possuem tamanhos iguais!");
			} else if (area_A>area_B) {
				printf("O retangulo A eh maior que o B");
			} 
			else {
				printf("O retangulo B eh maior que o A");
			}
		}
			}
						
