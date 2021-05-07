小明跟他的两个女友分别站在一个数轴上的三个不同位置，他们三个人都可以向左或向右移动一个单位（+1或-1），当然了他们也可以选择不动，问他们移动后两两之间距离的最小距离和。

输入格式:
每行包括三个正整数a,b和c (1≤a,b,c≤1e9)，代表三人的位置

输出格式:
输出一个整数，表示移动之后两两之间最小距离和（距离和：|a-b|+|a-c|+|b-c|）

输入样例:
在这里给出一组输入。例如：

3 3 4
输出样例:
在这里给出相应的输出。例如：

0


#include <bits/stdc++.h>
using namespace std;

void daxiao(int a, int b, int c) {
    int temp1=0, temp2=0, temp3=0;
    if(a>b) {
        temp1 = a;
        a = b;
        b = temp1;
    }
    if(b>c) {
        temp2 = b;
        b = c;
        c = temp2;
    }
    if(a>c) {
        temp3 = a;
        a = c;
        c = temp3;
    }
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    daxiao(a, b, c);
    if(a==b && a==c && b==c) cout<<"0";
    if(a==b && c>a) c--;
    else if(a==b && c<a) c++;
    if(a==c && b>a) b--;
    else if(a==c && b<a) b++;
    if(b==c && a<b) a++;
    else if(b==c && a>b) a--;
    if(a!=b && a!=c && b!=c) {
        a++;
        c--;
    }
    int total=0, ca=0, cb=0, ba=0;
    ca=c-a, cb=c-b, ba=b-a;
    total = ca + cb + ba;
    cout<<total;
}
