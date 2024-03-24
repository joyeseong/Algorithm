#include <stdio.h> 
#include <stdlib.h>
#include <math.h> 

int main(void)
{
   int n;
   scanf("%d", &n);

   for(int i=0; i<n; i++) {
      int x1, y1, r1, x2, y2, r2, z;
      float a;
      
      scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);

      if(x1==x2 && y1==y2 && r1==r2) { z=-1; }
      else {
         a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
         if(r1+r2 < a) { z = 0;   }
         else {
            if(r1+r2 == a) { z = 1; }
            else{
               if(abs(r1-r2) == a) {z = 1;   }
               else {
                  if(abs(r1-r2) < a) { z = 2; }
                  else {z = 0;} 
               }
            }
         }
      }
       printf("%d\n",z);
   }
   
       
}
