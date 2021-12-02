#include <stdio.h>
#include <stdlib.h>	
#include <math.h>
int main(){
float x1,y1,x2,y2,r1,r2,d,t,g;
scanf("%f%f\n%f%f\n%f%f",&x1,&y1,&x2,&y2,&r1,&r2);
d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    t = r1+r2;
    g = fabs(r1-r2);
    if(d==t||d==g)
      {
          printf("Touch");
      }
      else if(d>t)
      {
          printf("Don't Cut");
      }
      else
      {
          printf("Cut");
      }
	}





