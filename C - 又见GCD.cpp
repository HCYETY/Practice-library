K学长遇到这样一个问题，现在有两个数字a和b，如果a和c的最大公约数是b且c不等于b，那么要求满足条件的最小的c，但是他觉得这个问题太简单了，决定拿出来考一考你们。那么，你能解决这个问题吗？
Input
第一行输入一个n，表示有n组测试数据，接下来的n行，每行输入两个正整数a,b。 a,b小于100000.
Output
输出对应的c，每组测试数据占一行。
Sample Input
2
6 2
12 4
Sample Output
4
8


#include<iostream>
using namespace std;

int gcd(int a,int b) {
	return b==0?a:gcd(b,a%b);
}

int main()
{
	int t;
	cin>>t;
	while(t--) {
		int a, b, c;
  		cin>>a>>b;
		c = 2 * b; // b是a、c的最大公约数，因为c！=b，所以c=2*b、3*b……
		while(gcd(a,c)!=b) {
			c+=b;
		}
  		cout<<c<<endl;
	}
}
