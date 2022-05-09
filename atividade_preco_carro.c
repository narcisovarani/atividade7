 #include <stdio.h>
#include <stdlib.h>

	
	int main (){
		
		float cfabrica, cfinal, cimposto, cdistribuidor = 0;
		
		printf ("Digite o preco de fabrica do carro:\n");
		scanf ("%f", &cfabrica);
		
		cdistribuidor = (cfabrica * 0.28);
		
		cimposto = (cfabrica * 0.45);
		
		cfinal = (cimposto + cdistribuidor + cfabrica);
				 		
		printf ("%.2f", cfinal);
		
	
		return 0;
	}

