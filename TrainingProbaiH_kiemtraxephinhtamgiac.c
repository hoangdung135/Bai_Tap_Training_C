#include <stdio.h>
#include <stdlib.h>
//#include <math.h>//
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (abs(b-c)<a&&a<(b+c)){
		printf ("Yes");
		}
	else {
		printf("No");
}
}
