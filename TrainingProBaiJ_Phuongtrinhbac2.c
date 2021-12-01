#include <stdio.h>
#include <stdlib.h>	
#include <math.h>
int main(){
float a,b,c,d,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
if (a==0){
   if (b==0){
      if (c==0){
	  printf ("VO SO NGHIEM");}
	  else 
	  printf("VO NGHIEM");}
	else{
		printf ("%.2f",-c/b);
	}
	}
else{
d=b*b-4*a*c;

if (d<0){
	printf("VO NGHIEM");
	}
	else if (d==0){
		printf ("%.2f",-b/(2*a));
	}
else {
x1= (-b+sqrt(d))/(2*a);
x2= (-b-sqrt(d))/(2*a);
	if (x1>x2){
		printf("%.2f %.2f",x1,x2);}
	else {
		printf ("%.2f %.2f",x2,x1); 
        }	    
    }
  }
}





