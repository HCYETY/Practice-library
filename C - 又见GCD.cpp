Kѧ����������һ�����⣬��������������a��b�����a��c�����Լ����b��c������b����ôҪ��������������С��c�������������������̫���ˣ������ó�����һ�����ǡ���ô�����ܽ�����������
Input
��һ������һ��n����ʾ��n��������ݣ���������n�У�ÿ����������������a,b�� a,bС��100000.
Output
�����Ӧ��c��ÿ���������ռһ�С�
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
		c = 2 * b; // b��a��c�����Լ������Ϊc��=b������c=2*b��3*b����
		while(gcd(a,c)!=b) {
			c+=b;
		}
  		cout<<c<<endl;
	}
}
