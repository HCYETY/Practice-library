/*
在一根长为L的水平木棍上有一群数量为n的蚂蚁，它们以每秒1cm/s的速度走到木棍一端就会掉下去。现在知道它们的起始位置是距离木根左端点的x处。但是不知道它们爬行的方向。在相向而行的两只蚂蚁相遇后，它们会掉头往反方向走。问所有蚂蚁都落下木棍的最快时间和最慢时间。

限制条件：
1 ≤ L ≤ 10的6次方
1 ≤ n ≤ 10的6次方
0 ≤ xi ≤ L
*/

/*
思路：
最短时间：所有蚂蚁都朝向较近的端点走会比较好。这种情况下，不存在两只蚂蚁相遇的情况，而且不可能在比此更短的时间内走到竿子的端点。
最长时间：两只蚂蚁相遇后，会各自转向。但可以想象成两只蚂蚁保持原样交错而过继续前进，因为两只蚂蚁是“相同”的。比如A和B相遇，按题意来说A和B各自转向，但由于两只蚂蚁没有区分，所以可以看成相遇前的A和原来要转向的B是同一只，这样就变成两只蚂蚁保持原样继续前进。
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, n;
    cin>>l>>n;
    int x[n];
    for(int i = 0; i < n; i++) {
        cin>>x[i];
    }
    
    int minTime = 0, maxTime = 0;
    for(int i = 0; i < n; i++) {
        minTime = max(minTime, min(x[i], l - x[i]));
    }
    for(int i = 0; i < n; i++) {
        maxTime = max(maxTime, max(x[i], l - x[i]));
    }

    cout<<minTime<<maxTime;
}
