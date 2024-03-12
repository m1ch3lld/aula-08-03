#include <stdio.h>
#include <stdlib.h>
 #include <locale.h>
 
int main () {
	setlocale (LC_ALL, "portuguese");
	int nota, soma, i, media;
	 
	 for(i = 1; i <= 4; i++){
	 printf("digite a nota %iº: ", i);
	 scanf("%i: ", & nota);
	 soma = soma + nota;
}
	media = soma/4;
	
	printf("\nMedia: %i", media);
	
	return 0;
}
