#include <stdio.h>
	int main() {
		int sony, dell, toshiba, total;

		printf("Quantidade de notebooks da marca Sony:");
		scanf("%d", &sony);
		printf("Quantidade de notebooks da marca Dell:");
		scanf("%d", &dell);
		printf("Quantidade de notebooks da marca Toshiba:");
		scanf("%d", &toshiba);
		total=sony+dell+toshiba;
		printf("%d notebook(s) da Sony\n %d notebook(s) da Dell\n %d notebook(s) da Toshiba\n Total de %d notebooks", sony, dell, toshiba, total);
	}
