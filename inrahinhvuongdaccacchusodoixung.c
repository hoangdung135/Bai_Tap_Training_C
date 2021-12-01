#include <stdio.h>
#include<math.h>
main()
{
	int n,i,j;
	scanf("%d", &n);
	for( i = 1; i <= n ; i++)
	{
		for(j = 0; j <= 2*n-1; j++)
		{
			if(abs(i) > abs(j))printf("%d ", abs(i) );
			else printf("%d ", abs(j) + 1);
		}
		printf("\n");
	}
} 
