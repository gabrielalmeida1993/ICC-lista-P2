#include <stdio.h>
#include <stdlib.h>

int col; int lin;

int menornum (int tabela[3][3])
{
	int maior = tabela[0][0]; 
	int ajuda; 
	int guardacoluna;

	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			ajuda = tabela[lin][col];
			if(maior<ajuda) 
			{ 
				maior = ajuda;
				guardacoluna = col;
			}
		}
	}
	
	int menor = tabela[0][guardacoluna];
	
	for(lin=0;lin<3;lin++)
	{
		ajuda = tabela[lin][guardacoluna];
		if(menor>ajuda || menor == ajuda) menor = ajuda;
	}
	
	return (menor);
	
}

int main ()
{
	int tab[3][3];
	int menor;
	
	printf(">> Digite os valores da tabela 3x3: ");
	
	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			scanf("%d", &tab[lin][col]);
		}
	}
	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ", tab[lin][col]);
		}
		printf("\n");
	}
	
	menor = menornum(tab);
	
	printf(">> O menor numero da coluna que contem o maior numero da matriz eh: %d", menor);
	
}
			
	
	
