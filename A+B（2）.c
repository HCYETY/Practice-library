/*
本题目要求读入2个整数A和B，然后输出它们的和对10000取余后的值。

输入格式:
输入在一行中给出2个绝对值不超过10*19的整数A和B。
输出格式:
对每一组输入，在一行中输出A+B的值。

输入样例:11111 22222
输出样例:3333
*/

#include<stdio.h>
int main()
  {long long a,b;
   scanf ( "%lld %lld", &a, &b );
   printf ( "%lld", (a % 10000 + b % 10000) % 10000 );
   return 0;
  }


