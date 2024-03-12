#include <stdio.h>

//escreva um algoritmo que solicite duas notas, nota menor que 0 ou maior que 10 repetir
int main () {
//	Declarar variaveis
	float nota1, nota2, media;
	
//	solicitar dados
	do{
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2)
 	
 	;media = nota1 + nota2 / 2;
 	
	} while (media < 0 || media > 10);
	
//	Resultados
	printf("nota informada %.1f", media);
}
