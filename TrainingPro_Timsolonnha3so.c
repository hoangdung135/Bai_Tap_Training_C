#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c){
		printf ("Bong");
		}
	else if (b>a&&b>c){
		printf ("Vang");
		}   
	else {
		printf("La");
    }    
}
