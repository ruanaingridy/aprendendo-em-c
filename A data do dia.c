#include <stdio.h>
	int main() {
		int dia, mes, ano;
		printf("Qual o dia de hoje?\n");
		scanf("%d", &dia);
		printf("Em que mes estamos?\n");
		scanf("%d", &mes);
		printf("Que ano eh este?\n");
		scanf("%d", &ano);
		
		printf("A data de hoje eh\n %d/%d/%d", dia, mes, ano);
	}
