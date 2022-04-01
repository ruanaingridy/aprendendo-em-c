#include <stdio.h>
	int main() {
		float premio, jog_1, jog_2, jog_3;
			
		premio=780.00;
		jog_1=(premio*46)/100;
		jog_2=(premio*32)/100;
		jog_3=780.00-(jog_1+jog_2);
		
		printf("O primeiro ganhador recebera %.2f\nO segundo ganhador recebera %.2f\nO terceiro ganhador recebera %.2f\nQue totaliza %.2f em premio", jog_1, jog_2, jog_3, premio);
	}
