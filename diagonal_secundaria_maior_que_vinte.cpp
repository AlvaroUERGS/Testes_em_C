#include<stdio.h>
int main()
{
	int i, j, matriz[3][3], diagsec[i][j], cont=0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Digite um numero para a posicao [%d][%d] ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
		
	}
	
	printf("\nMatriz\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("[%d]", matriz[i][j]);
		}printf("\n");
	}
	
	printf("\nDiagonal Secundaria\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(j==2-i)
			
			{
				diagsec[i][j] = matriz[i][j];
				printf("[%d]", diagsec[i][j]);
				if(diagsec[i][j]>=20)
				{
					cont++;
				}
			}	
		}
	}
	
	printf("\n%d numeros da diagonal secundaria foram maiores que 20");
}
