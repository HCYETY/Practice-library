#include <stdio.h>
int main()
  {int i, n, a[10];
   int minIndex, maxIndex;
   printf("Enter n:");
   scanf("%d",&n);
   printf("Enter %d integers:\n",n);
   for(i=0; i<n; i++) {
   	scanf("%d",&a[i]);
   }
   	minIndex = a[0], maxIndex = a[0];
   	for(i=1; i<n; i++) {
   		if(minIndex>a[i]) {
   			minIndex = a[i];
	    }
	}
	for(i=1; i<n; i++) {
   		if(maxIndex<a[i]) {
   			maxIndex = a[i];
	    }
	}
   	printf("minIndex = %d\n",minIndex);
   	printf("maxIndex = %d\n",maxIndex);
    return 0;
  }
