问题描述：
有1元,5元,10元,50元,100元,500元的硬币各c1,c5,c10,c50,c100,c500枚.
现在要用这些硬币来支付A元,最少需要多少枚硬币? 假定本题至少存在一种支付方案.
限制条件：
0≤ci≤10^9
0≤A≤10^9

输入:
第一行有六个数字,分别代表从小到大6种面值的硬币的个数
第二行为A,代表需支付的A元

样例:
输入
3 2 1 3 0 2
620
输出
6


#include<bits/stdc++.h>
using namespace std;

const int V[6]={1,5,10,50,100,500};

int main()
{
   int C[10], A;
   for(int i=0; i<6; i++){
      cin>>C[i];
   }
   cin>>A;
   int ans=0;
   for(int i=5;i>=0;i--){
      int t = min(A/V[i], C[i]);
      A -= t*V[i];
      ans += t;
   }
   cout<<ans<<endl;
   return 0;
}
