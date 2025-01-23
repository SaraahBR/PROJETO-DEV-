#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma(int pv1,int pv2)
{
 pv1 = 10;
 pv2 = 20;
 return pv1+pv2;
}

int main(int argc, char *argv[]) {

    int v1 = 35;
	int v2 = 54;
	int resultado = 0;
	
	
	resultado = soma (v1,v2);
	printf("O resultado da soma e: %d\n", resultado);
	rodape();
}


void cabecalho(){


	printf("Inicio do programa...\n");
}

void rodape(){
	printf("Fim do programa...\n");
}
 
