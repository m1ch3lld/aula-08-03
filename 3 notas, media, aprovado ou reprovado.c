#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	float nota, soma, media;
	int i;
	
	for (i = 1; i <= 3; i++){
		printf("Digite a %iº nota ",i);
		scanf("%f",&nota);
		
		soma = soma + nota;
	}
	media = soma / 4;
	
	if( media > 7){
		scanf("aprovado!");
	} else {
		printf("reprovado!");
	}
	
	printf("\n===Resultado===");
	printf("\nA media do aluno foi: %.2f", media);
	 
	
	return 0; 
}
