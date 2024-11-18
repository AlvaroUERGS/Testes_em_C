#include<stdio.h>
int main(){
	
	int i, j, matriz[3][3], diagsup;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("numeros [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("[%d]", matriz[i][j]);
		}printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i>j)
			printf("[%d]", matriz[i][j]);
		}
	}
	
	printf("\nDiagonal superior\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i<j)
			{
				diagsup = diagsup + matriz[i][j];
				
			}
		}
	}printf("[%d]", diagsup);
}
