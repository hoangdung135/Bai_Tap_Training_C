#include <stdio.h>
#include <stdio.h>

int main() 
{
	int n = 0,i,j;
    scanf("%d", &n);
    for( i = 1; i <= n; i++)
    {
        for( j = i; j > 0; j--)
        {
            if(j == i || j == 1 || i == n)
			{
			    printf("*");
			}
            else
			{ 
			    printf(" ");
			}
        }
        printf("\n");
    }
}
