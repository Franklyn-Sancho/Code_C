#include <stdio.h>
#include <stdlib.h>

float Vin  = 0.0,
	  Vled = 0.0,
	  Iled = 0.0,
	  R = 0.0;
char op;



int main(int argc, char *argv[]) {

	printf("Led calc v1.0 \n");
	printf("Autor: Franklyn Sancho\n");

	printf(" Digite o valor de vin (em volts): ");
	scanf("%f", &Vin);
	printf("\n");
	printf(" Digite o valor Vled (em volts): ");
	scanf("%f", &Vled);
	printf("\n");
	printf(" Digite o valor do Iled (em amperes): ");
	scanf("%f", &Iled);

	R = (Vin-Vled)/Iled;

	printf("Vin = %.2f\n\n",Vin);
	printf("Vin = %.2f\n\n",Vled);
	printf("Vin = %.2f\n\n",Iled);
	printf("O resistor para o LED tem o valor de %.2f Ohms\n\n",R);
	

    system("Pause");
	return 0;
}
