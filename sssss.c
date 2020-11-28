#include <stdio.h>
int main()
  {int i, j, N, M, sum, k, count=0;
	int a[M],b[M];
	scanf("%d\n",&N);
	for(i=1; i<N; i++) {
		for(j=1; j<M; j++) {
			scanf("%d",&M);
			for(k=1; k<M; k++) {
				scanf("%d ",&k);
				sum += k;
			}
		printf("%d\n",sum);
  		}
	}
  }
