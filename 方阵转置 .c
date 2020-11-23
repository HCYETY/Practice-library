#include <stdio.h>
int main(void)
  {int i, j, n, temp;
   int a[6][6];
   printf("Enter n: ");
   scanf("%d", &n);
   for(i=0; i<3; i++ ) {
   	for(j=0; j<2; j++ ) {
   		scanf ("%d", &a[i][j]) ;
  		}
	}
   for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i<=j) {  /* 只遍历上三角阵 */
         	temp = a[i][j];
		   	a[i][j] = a[j][i];
				a[j][i] = temp;
				printf ( "%4d", a[i][j] );
           printf ( "\n" );

         }
		}
	}
   printf("%d\n", a[i][j]);
   return 0;
  }

