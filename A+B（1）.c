/*
本题目要求读入2个整数A和B，然后输出它们的和。
若和为整数输出这个整数，若和为小数，则结果保留两位小数

输入格式:
输入在一行中给出2个绝对值不超过10*15的实数A和B。
输出格式:
对每一组输入，在一行中输出A+B的值。

输入样例:18.5 -2.333
输出样例:16.17
*/

/*解法一*/
#include <stdio.h>
int main()
  {double A, B, sum;
   A <= fabs ( 10 * 15 );
   B <= fabs ( 10 * 15 );
   scanf("%lf %lf",&A,&B);
   sum = A + B;
   if ( sum - (int)sum == 0) {
       printf("%.lf",sum);
   } else {
        printf("%.2lf",sum);
   }
   return 0;
  }
  
/*解法二*/
#include<stdio.h>
int main()
  {double a,b;
	scanf ( "%lf %lf", &a, &b );
	long long c=a+b;
	if ( c==a+b ) {
		printf ( "%lld", c );
	} else {
		printf ( "%.2f", a+b );
	}
	return 0;
  }

