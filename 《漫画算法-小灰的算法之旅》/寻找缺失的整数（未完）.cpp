/*
��һ�������������� 99 �����ظ�������������Χ��1~100�� Ψ��ȱ�� 1 �� 1~100 �е�������
����ҳ����ȱʧ��������
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[10], hash[10] = {1};
	for(int i = 0 ; i < 9; i++)
		cin>>arr[i];
	for(int i = 0; i < 10; i++) {
		hash[arr[i]]--;
	}
	for(int i = 0; i < 10; i++) {
		if(hash[i]) {
	 		cout<<i;
		}
	}
}
