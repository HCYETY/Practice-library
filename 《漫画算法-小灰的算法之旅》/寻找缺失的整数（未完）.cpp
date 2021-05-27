/*
在一个无序数组里有 99 个不重复的正整数，范围是1~100， 唯独缺少 1 个 1~100 中的整数。
如何找出这个缺失的整数？
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
