/*
有 n 根棍子，棍子 i 的长度为ai。想要从中选出3根棍子租场周长尽可能长的三角形。
请输出最大的周长，若无法组成三角形则输出0.

限制条件：
3 ≤ n ≤ 100
1 ≤ ai ≤ 10的6次方
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int len) {
    int ans = 0;

    // 让 i < j < k ,这样棍子就不会被重复选中了
    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; j++) {
            for(int k = j + 1; k < len; k++) {
                int length = a[i] + a[j] + a[k]; // 周长
                int _max = max(a[i], max(a[j], a[k])); // 最长棍子的长度
                int rest = length - _max; // 其余两根棍子的长度之和

                if(_max < rest) {
                    // 组成了三角形，如果可以更新答案 则更新                    
                    ans = max(ans, length);
                }
            }
        }
    }
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int ans = solve(a, n);
    cout<<ans;
}
