#include <stdio.h>
#include <stdlib.h>

float *ptr;

int main ()
{
	int N; int i;
	
	printf(">> Digite o numer N de numeros float a ser lido: ");
	scanf("%d", &N);
	
	ptr = (float *) calloc(N, sizeof(float));
	
	printf(">> Digite os %d numero(s) float:\n", N);
	
	for(i=0;i<N;i++)
	{
		scanf("%f", (ptr));
		*(ptr++);
	}
	
	for(i=0;i<N;i++) *(ptr--);
	
	float maior = *ptr, ajuda, menor = *ptr, soma = *ptr;

	for(i=0;i<(N-1);i++)
	{
		*(ptr++);
		ajuda = *ptr;
		if(maior<ajuda) maior = ajuda;
		if(menor>ajuda) menor = ajuda;
		soma = ajuda + soma;
	}
	
	float media;
	media = (soma/N);
	
	printf(">> Maior: %.2f\n>> Menor: %.2f\n>> Media: %.2f", maior, menor, media);
	
	
}
