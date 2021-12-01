#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
int a,i,count;
for (a=1;a<1000;a++)
{
    count =0;
    for (i=2;i<a;i++)
    {
	    if (a%i==0)
	    {
		count ++;
	    }
    }
    if (count ==0)
    {
	printf("%d\t",a);
    }
}
}
