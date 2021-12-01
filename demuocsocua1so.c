#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{ 
int a,i,b;
scanf("%d",&a);
b=1;
i=0;
while(b<=a)
{
	if(a%b==0)
	{i++;
	b++;
	}
	else
	{
	b++;
	}
	}
	printf("%d",i);
	return 0;
}






