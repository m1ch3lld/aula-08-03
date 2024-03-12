#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
 // escreva um programa de computador que solicite do usuarios 4 notas e, ao final, apresente a media.
 
 
int main () {
// declarando variaveis 
	setlocale (LC_ALL, "portuguese");
	int nota, soma, i, media;
	
//	solicitando notas
	 for(i = 1; i <= 4; i++){
	 printf("digite a nota %iº: ", i);
	 scanf("%i: ", & nota);
	 soma = soma + nota;
}
	media = soma/4;
	
//	exibindo resultados 
	printf("\nMedia: %i", media);
	
	return 0;
}
