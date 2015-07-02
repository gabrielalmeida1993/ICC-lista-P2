#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vet[61]; int ajuda; int i;
	FILE* mega;
	
	for(i=0;i<61;i++) vet[i]=0;
	
	mega = fopen("megasena.txt","rt");
	if(mega == NULL) printf("erro");
	
	while(!feof(mega))
	{
		fscanf(mega,"%d", &ajuda); //printf(" %d", ajuda);
		vet[ajuda]++;
	}
	int maior1= 0, maior2 = 0, maior3 = 0, guardamai1,  guardamai2, guardamai3;
	int menor1 = 9999, menor2 = 9999, menor3 = 9999, guardamen1, guardamen2, guardamen3;
	
	for(i=1;i<61;i++)
	{
		ajuda = vet[i];
		if(ajuda>maior1){ maior1 = ajuda; guardamai1 = i;}
		if(ajuda<menor1){ menor1 = ajuda; guardamen1 = i;}
	}
	
	for(i=1;i<61;i++)
	{
		ajuda=vet[i];
		if(ajuda>maior2 && i!=guardamai1){ maior2 = ajuda; guardamai2 = i;}
		if(ajuda<menor2 && i!=guardamen1){ menor2 = ajuda; guardamen2 = i;}
	}
	
	for(i=1;i<61;i++)
	{
		ajuda = vet[i];
		if(ajuda>maior3 && i!=guardamai1 && i!=guardamai2){ maior3 = ajuda; guardamai3 = i;}
		if(ajuda<menor3 && i!=guardamen1 && i!=guardamen2){ menor3 = ajuda; guardamen3 = i;}
	}
	
	printf(">> Maiores num:\n-primeiro: %d\n-segundo: %d\n-terceiro: %d", guardamai1, guardamai2, guardamai3);
	printf("\n>> Menores num:\n-primeiro: %d\n-segundo: %d\n-terceiro: %d", guardamen1, guardamen2,  guardamen3);
	
	fclose(mega);

}
