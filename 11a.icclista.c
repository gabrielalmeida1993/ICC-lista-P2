#include <stdio.h>
#include <stdlib.h>



int maior; int linha; int coluna;

int tabela (int num, int mat[30][30])
{
	int ajuda; int lin; int col;
	int resultado[3];
	maior = mat[0][0];


	for(lin=0;lin<num;lin++)
	{
		for(col=0;col<num;col++)
		{ 
			ajuda = mat[lin][col];
			if(ajuda>maior) 
			{
			 maior = ajuda; linha = lin; coluna = col;
			}
		}
	}
	return(maior);
}

int main ()
{
	int i;  
	int i2;
	int mat[30][30];
	int num;
	int recebe[3];
	
	printf(">> Digite o N da matriz quadrada: ");
	scanf("%d", &num);
	
	printf(">> Digite os elementos da matriz: ");
	for(i=0;i<num;i++)
	{
		for(i2=0;i2<num;i2++) scanf("%d", &mat[i][i2]);
	}
	printf("\n");
	for(i=0;i<num;i++)
	{
		for(i2=0;i2<num;i2++) printf("%d ", mat[i][i2]);
	 	printf("\n"); 
	}
	
	tabela(num,mat);
	
	printf("> Maior: %d\n> Linha: %d\n> Coluna: %d", maior, linha, coluna);
	

}
