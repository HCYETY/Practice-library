#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(a == b) {
		return a;
	}
	//	a&1等价于a%2 ，故a&1==0表示a%2==0，则a为偶数
	if((a&1)==0 && (b&1)==0) {         // a和b均为偶数时
		// a>>1等价于a/2(的一次方),同理:a>>2等价于a/2的2次方
		return gcd(a>>1, b>>1)<<1;   // <<1则表示乘2
	} else if((a&1)==0 && (b&1)!=0) {  // a为偶数，b为奇数时
		return gcd(a>>1, b);
	} else if((a&1)!=0 && (b&1)==0) {  // a为奇数，b为偶数时
		return gcd(a, b>>1);
	} else {                           // a和b均为奇数时
		int big = a > b ? a : b;
		int small = a < b ? a : b;
		return gcd(big-small, small);
	}
}

int main()
{
	int num1, num2;
	cin>>num1>>num2;
	cout<<gcd(num1, num2)<<endl;
}
