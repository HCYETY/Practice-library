#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(a == b) {
		return a;
	}
	//	a&1�ȼ���a%2 ����a&1==0��ʾa%2==0����aΪż��
	if((a&1)==0 && (b&1)==0) {         // a��b��Ϊż��ʱ
		// a>>1�ȼ���a/2(��һ�η�),ͬ��:a>>2�ȼ���a/2��2�η�
		return gcd(a>>1, b>>1)<<1;   // <<1���ʾ��2
	} else if((a&1)==0 && (b&1)!=0) {  // aΪż����bΪ����ʱ
		return gcd(a>>1, b);
	} else if((a&1)!=0 && (b&1)==0) {  // aΪ������bΪż��ʱ
		return gcd(a, b>>1);
	} else {                           // a��b��Ϊ����ʱ
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
