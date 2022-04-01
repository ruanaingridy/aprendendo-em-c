#include <stdio.h>
	int main() {
		int alunos, alunas, total;
		
		printf("Total de alunos:");
		scanf("%d", &alunos);
		printf("Total de alunas:");
		scanf("%d", &alunas);
		total=alunos+alunas;
		
		if (alunos==alunas) {
			printf("Mesma quantidade!");
		} else if (alunos>alunas) {
			printf("Quantidade de alunos maior que a de alunas!");
		} else {
			printf ("Quantidade de alunas menor que a de alunos!");
		}
	}
