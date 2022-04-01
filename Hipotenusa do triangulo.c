#include <stdio.h>
#include <math.h>
	int main() {
		float hipotenusa, cateto_oposto, cateto_adjacente, x;
		
		printf("Cateto oposto: ");
		scanf("%f", &cateto_oposto);
		printf("Cateto adjacente: ");
		scanf("%f", &cateto_adjacente);
		
		hipotenusa=sqrt((cateto_oposto*cateto_oposto)+(cateto_adjacente*cateto_adjacente));
		
		printf("A hipotenusa do triangulo eh: %f", hipotenusa);
	}
