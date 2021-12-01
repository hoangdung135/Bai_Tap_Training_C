#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n,i,j;
	scanf("%d",&n);
	for ( i=0;i<n;i++)
	{
		for ( j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
	

