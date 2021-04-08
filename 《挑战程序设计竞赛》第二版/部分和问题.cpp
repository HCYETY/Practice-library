/*
题目描述：
给你n个数(a1,a2,a3.......an)，判断是否可以从中选出若干数，使它们的和恰好为 k,有就输出 "YES",否则输出 "NO"。
数据范围：n<20;

输入描述：
第一行输入两个数n,k;
第二行输入n个数a1 a2 ...... an
输出描述：
如果存在一些数加起来为k输出"YES";否则输出"NO".

输入：
3 6
2 3 9
输出：
NO

输入：
5 6
2 3 5 2 1
输出：
YES
*/


#include <bits/stdc++.h>
using namespace std;

int n, k, a[25];

bool dfs(int i, int sum) {
 	if(i==n) {            //可简写为if(x==n) return sum==k;
      if(sum==k)
         return 1;
  	   else
         return 0;
   }
   if(sum>k)  return 0;  //剪枝
   if(dfs(i+1,sum))  return 1;
   if(dfs(i+1,sum+a[i]))  return 1;
}

int main()
{
	cin>>n>>k;
	for(int i=0; i<n; i++) {
  		cin>>a[i];
	}
	if(dfs(0, 0))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
