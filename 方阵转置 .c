#include <stdio.h>
int main(void)
  {int i, j,  temp;
   int a[3][3];
   for(i=0; i<3; i++) {
   	for(j=0; j<3; j++) {
   		scanf("%d", &a[i][j]) ;
  		}
	}
   for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			if(i<=j) {  /* 只遍历上三角阵 */
         	temp = a[i][j];
		   	a[i][j] = a[j][i];
				a[j][i] = temp;
         }
		}
	}
	for(i=0; i<3; i++) {
      for(j=0; j<3; j++) {
         printf("%4d", a[i][j]);
      }
         printf("\n");
   }
   return 0;
  }

