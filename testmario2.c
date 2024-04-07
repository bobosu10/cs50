#include <stdio.h>

int main()
{
	int n;
	
	do
	{
		printf("Height:");
		scanf("%i",&n);
	}
	while (n<1 || n>8);
	
	for (int i = 0;i < n;i++) //linha
	{
		for (int j = 0;j <= n-i-1;j++) //coluna 
		{
			printf(" ");
		}
		for (int k = 0;k <= i;k++)
		{
			printf("#");
		}
		printf(" ");
		for (int l = 0;l <= i;l++)
		{
			printf("#");
		}
		printf("\n");
	}
}
