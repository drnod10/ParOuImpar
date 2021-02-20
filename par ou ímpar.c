#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Digite um valor:\n");
	scanf("%d", &valor);
	
	if (valor%2==0){
		printf("Número par.");
	}else{
		printf("Número ímpar.");
	}

}
