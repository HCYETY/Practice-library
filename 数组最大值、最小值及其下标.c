#include <stdio.h>
int main()
  {int i, num, minSuffix, maxSuffix, a[10];
   int minIndex, maxIndex;
   printf("Enter num:");
   scanf("%d",&num);
   printf("Enter %d integers:\n",num);
   for(i=0; i<num; i++) {
   	scanf("%d",&a[i]);
   }
   	minIndex = a[0], maxIndex = a[0];
   	minSuffix = 0, maxSuffix = 0;
   	for(i=1; i<num; i++) {
   		if(minIndex>a[i]) {
   			minIndex = a[i];
   			minSuffix = i;
	    }
	}
	for(i=1; i<num; i++) {
   		if(maxIndex<a[i]) {
   			maxIndex = a[i];
   			maxSuffix = i;
	    }
	}
   	printf("minIndex is %d index is %d\n",minIndex,minSuffix);
   	printf("maxIndex is %d index is %d\n",maxIndex,maxSuffix);
    return 0;
  }
