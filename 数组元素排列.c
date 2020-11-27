#include <stdio.h>
int main(void)
  {int i, index=0, k, temp;
   int a[5];
   printf("Enter 5 integers: ");
   for(i=0; i<5; i++) {
      scanf("%d", &a[i]);
   }
   for(k=0; k<4; k++) {
   	index = k;
		for(i=k+1; i<5; i++) {
	    	if(a[i]>a[index]) {
	       	index = i;
			}
		}
   	temp = a[index];
   	a[index] = a[k];
   	a[k] = temp;
   }
	for(i=0; i<5; i++) {
		printf("%d ",a[i]);
	}
   return 0;
  }

