#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ float x1,y1,x2,y2;
float r1,r2,t,e,d;
scanf("%f\t%f",&x1,&y1);
scanf("\n%f\t%f",&x2,&y2);
scanf("\n%f\t%f",&r1,&r2);

      t=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
      e = r1+r2;
      d = fabs(r1-r2);

      if(t==e||t==d)
      {
          printf("Touch");
      }
      else if(t>e)
      {
          printf("Don't Cut");
      }
      else
      {
          printf("Cut");
      }
return 0;
}
