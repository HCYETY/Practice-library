#include <stdio.h>
int main(void)
  {int i, n=1, odd=0, even=0;
   for(i=n;i<=100;i+=2) {
   even = even + i;
   }
   printf("even = %d\n",even);
   for(i=n+1;i<=100;i+=2) {
   odd = odd + i;
   }
   printf("odd = %d\n",odd);
  }
   
