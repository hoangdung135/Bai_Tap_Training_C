#include <stdio.h>
#include <stdlib.h>	
int main(){
int n,i,j;
scanf("%d",&n);
for (i=1;i<=n-1;i++){
	for (j=1;j<=i-1;j++) printf (" "); printf("%d",i);
	for (j=1;j<=(2*n)-1-(2*i);j++) printf (" "); printf("%d\n",i);
	}
for (i=1;i<=n-1;i++) printf(" "); printf ("%d\n",n);
for (i=n-1;i>=1;i--){
	for (j=1;j<=i-1;j++) printf (" "); printf("%d",i);
	for (j=1;j<=(2*n)-1-(2*i);j++) printf (" "); printf("%d\n",i);
	}
	}





