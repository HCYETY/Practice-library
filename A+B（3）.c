/*
计算 a+b 并以标准格式输出总和----也就是说，从最低位开始每隔三位数加进一个逗号（千位分隔符），如果结果少于四位则不需添加。

输入格式:
共一行，包含两个整数 a 和 b，?10^6≤a,b≤10^6
输出格式:
共一行，以标准格式输出 a+b 的和。

输入样例:-1000000 9
输出样例:-999,991
*/

#include <iostream>
using namespace std;
int main()
  {int a, b;
   cin >> a >> b;
   int c = a + b;
   string num = to_string(c);
   string res;
   for (int i = num.size() - 1, j = 0; i >= 0; i -- ) {
      res = num[i] + res;
      ++ j;
      if (j % 3 == 0 && i && num[i - 1] != '-') {
      	res = ',' + res;
		}
	}
   cout << res << endl;
   return 0;
  }

