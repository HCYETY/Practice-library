/*
����ĿҪ�����2������A��B��Ȼ��������ǵĺ͡�
����Ϊ��������������������ΪС��������������λС��

�����ʽ:
������һ���и���2������ֵ������10*15��ʵ��A��B��
�����ʽ:
��ÿһ�����룬��һ�������A+B��ֵ��

��������:18.5 -2.333
�������:16.17
*/

/*�ⷨһ*/
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
  
/*�ⷨ��*/
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

