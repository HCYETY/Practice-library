#include <stdio.h>
int  mi(int x, int n);
int main()
  {int x, n;
   scanf("%d %d",&x, &n);
   printf("%d",mi(x,n)) ;
  }

int  mi(int x, int n)
  {if (n==1) {
		return x;
	} else {
		 return x*mi(x,n-1);
	}
  }

