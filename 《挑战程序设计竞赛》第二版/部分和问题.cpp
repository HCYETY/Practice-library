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


#include <bits/stdc++.h>
using namespace std;

boos dfs(int i, int sum) {
	if(sum>k) return 0;
	if()
}

int main()
{
	int n, k, a[25];
	cin>>n>>k;
	for(int i=0; i<n; i++) {
  		cin>>a[i];
	}
	if(dfs())
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}


// i 为第 i 个数据 a[i-1]，sum 为当前部分和
bool dfs(int i, int sum)
{
	if (i == n){	// DFS 停止条件
		return sum == k;
	}
	if (dfs(i + 1, sum)){	// 下个数据不加
		return true;
	}
	if (dfs(i + 1, sum + a[i])){	// 下个数据加
		return true;
	}

	return false;	// 遍历所有结果都无符合条件
}

bool dfs(int x,int sum)   //x记录标号  sum为记录的和
{
    if(x==n)              //可简写为if(x==n) return sum==k;
    {
        if(sum==k)
            return 1;
        else
            return 0;
    }
    if(sum>k)  return 0;  //剪枝
    if(dfs(x+1,sum))           //标记下个数没被选择
    {
        b[x+1]=0;           //注  这里不是b[x]!!!!!  好吧  我比较菜。。。。
        return 1;
    }
    if(dfs(x+1,sum+a[x+1]))    //标记下个数被选择
    {
        b[x+1]=1;
        return 1;
    }
}
