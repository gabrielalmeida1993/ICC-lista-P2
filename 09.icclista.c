#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vet1[20]; int vetajuda[20]; int vet2[20];
	int i; int a; int b=0;
	
	printf(">> Digite o vetor: ");
	scanf("%d", &a);
	for(i=0;i<a;i++){ scanf("%d",&vet1[i]); /*printf("%d", vet1[i]);*/}
	
	for(i=0;i<a;i++){ vet2[i] = 0; vetajuda[i] = 0;}
	
	//comparação
	int ajuda;
	for(i=0;i<a;i++)
	{
		ajuda = vet1[i];
		vetajuda[ajuda]++;
	}
	
	for(i=0;i<20;i++)
	{
		if(vetajuda[i]==1){ vet2[b] = i; b++;}
	}
	
	for(i=0;i<b;i++)
	{
		printf("%d - ", vet2[i]);
	}
}
