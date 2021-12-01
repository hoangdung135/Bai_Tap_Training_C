#include<stdio.h>
#include<math.h>
int main()
{
	int n,cstc,i,dem,skc,tsc=1,dem2=0,dem5=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		int a=i;
		while(a%2==0)
		{
			dem2++;
			a/=2;
		}
		while(a%5==0)
		{
			dem5++;
			a/=5;
		}
		if(a%2!=0||a%5!=0)
		{
		tsc=tsc*(a%10);
		tsc%=10;
	    }
	}
	dem=dem2-dem5;
	if(dem%4==0){skc=6;}
	if(dem%4==1){skc=2;}
	if(dem%4==2){skc=4;}
	if(dem%4==3){skc=8;}
	cstc=(tsc*skc)%10;
 
	printf("%d",cstc);
	return 0;
}
