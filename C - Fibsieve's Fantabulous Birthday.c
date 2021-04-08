最近， LOL，王者农药，都开启了新的玩法-自走棋；
想必你也一定听说过，可能还玩过，甚至可能是个王者；
没错，今天A学长也要下棋，不过不是用电子设备，而是真正的“自”走棋；
有一个N * N的大棋盘, 如下图所示,
1 所在的位置为 (1, 1)
2 所在的位置为 (1, 2)
3 所在的位置为 (2, 2)
4 所在的位置为 (2, 1)
5 所在的位置为 (3, 1)
…….
以此类推;

A学长按着1 2 3 4 …… 的顺序走了好久好久。 最后，A学长有点晕，他晕的只能看到地上的数字了
他现在很慌，你知道的，当人不知道自己在哪里的时候。
这个时候你能帮助他吗？ 告诉A学长他所在的位置


Input
第一行输入包括一个整数T,代表T组输入; (T <= 200)
接下来T行, 每行一个整数n, 代表所在位置的数值 (n <= 1e15)
Output
输出格式为 : Case k : x y
k代表第几组数据, x, y 代表当前数值所处位置的坐标, 中间用空格隔开

Sample Input
3
8
20
25
Sample Output
Case 1: 2 3
Case 2: 5 4
Case 3: 1 5


#include <stdio.h>
#define LL long long
int main()
{
	int t;
   scanf("%d",&t);
    int Case=1;
   while(t--){
      LL n;
   	scanf("%lld",&n);
      LL t=(LL)sqrt(n);//n的行/列数
      printf("Case %d: ",Case++);
      if(t*t==n) {//平方关系
         if(t%2)//奇数时横坐标为1
            printf ("1 %lld\n",t);
         else//偶数时纵坐标为1
         	printf ("%lld 1\n",t);
      } else {//不为平方关系时
         LL circle = t + 1;//圈数
         LL minn = (circle-1) * (circle-1) + 1;//一圈中最小的数
         if(circle%2) {//奇数圈
            if(minn+circle-1>=n)
               printf("%lld %lld\n",circle,n-minn+1);
            else
               printf("%lld %lld\n",circle*circle-n+1,circle);
         } else {//偶数圈
            if(minn+circle-1>=n)
               printf("%lld %lld\n",n-minn+1,circle);
            else
               printf("%lld %lld\n",circle,circle*circle-n+1);
         }
      }
   }
}
