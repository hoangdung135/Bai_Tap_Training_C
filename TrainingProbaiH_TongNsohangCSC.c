#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,u1,d;
	scanf("%d%d%d",&n,&u1,&d);
	printf("%ld",(long int)(n*(2*u1+(n-1)*d)/2));
}
