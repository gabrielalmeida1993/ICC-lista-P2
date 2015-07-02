#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double *vet; int num; int i;
	
	printf(">> Digite o numero de numeros de ponto fluante: ");
	scanf("%d", &num);
	printf("\n\n");
	vet = (double *) calloc(num,sizeof(double));
	
	for(i=0;i<num;i++)
	{
		printf("> Digite o numero %d: ", i);
		scanf("%lf", vet);
		printf("%.2lf", *vet);
		*(vet++);
	}
	for(i=0;i<num;i++) *(vet--);
	
	double menor1; double menor2; double ajuda;
	
	menor1 = *vet; //menor2 = *vet; //printf("%lf--%lf", menor1, menor2);
	for(i=0;i<num;i++)
	{
		ajuda = *(vet++); //printf("ajuda: %.2lf", ajuda);
		if(menor1>ajuda)
		{ 
			menor2 = menor1; 
			menor1 = ajuda;
		}			
	}
		
	printf(">>Primeiro menor numero: %.2lf\n>>Segundo menor numero: %.2lf", menor1, menor2);
	
}

	
	
