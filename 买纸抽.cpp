小明去商店买纸抽，商店里有k种不同包装规格的纸抽，第i种包装规格的纸抽，恰好含有i包，现在小明要买n包纸抽，但是他只能购买一种规格的纸抽，他最少需要购买几包同种规格的纸抽，才能恰好买到n包纸抽（测试数据保证有解）

输入格式:
输入在一行中给出2个值不超过1000000000的正整数n和k。

输出格式:
输出一个整数表示最少的购买数量

输入样例:
在这里给出一组输入。例如：

8 7
输出样例:
在这里给出相应的输出。例如：

2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    if(n == k) {
        cout<<"1";
        return 0;
    } else if(n % k == 0) {
        cout<<n/k;
        return 0;
    }
    int flag = 0, sum = 0;
    for(int i=k; i>0; i--) {
        if(n % i == 0) {
            cout<<n/i;
            return 0;
        }
    }
    while(1) {
//         if(n / 2 == 0) {
//             sum = n/2;
//         } else {
//             sum = (n + 1) / 2;
//         }
        sum = n / 2;
        flag += 2;
        if(sum <= k) {
            cout<<flag;
            break;
        }
        n /= 2;
    }
}
