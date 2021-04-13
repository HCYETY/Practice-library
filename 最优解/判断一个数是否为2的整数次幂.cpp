#include <bits/stdc++.h>
using namespace std;
bool isPower(int number) {
	return (number & number-1) == 0;
}
int main()
{
	int num;
	cin>>num;
	cout<<isPower(num);
}
