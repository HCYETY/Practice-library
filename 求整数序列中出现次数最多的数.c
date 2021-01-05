/*
 题要求统计一个整型序列中出现次数最多的整数及其出现次数。

输入格式：
输入在一行中给出序列中整数个数N（0<N≤1000），以及N个整数。数字间以空格分隔。

输出格式：
在一行中输出出现次数最多的整数及其出现次数，数字间以空格分隔。题目保证这样的数字是唯一的。

输入样例：
10 3 2 -1 5 3 4 3 0 3 2
输出样例：
3 4
*/
  
#include <stdio.h>
int main()
{
    int i, j, N, str[1000], a[1000];
    int max=a[0], t=0;
    scanf("%d", &N);
    for(i=0; i<N; i++) {
        scanf("%d", &str[i]);
        a[i] = 0;
    }
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            if(str[i] == str[j]) {
                a[i]++;
            }
        }
    }
    for(i=1; i<N; i++) {
        if(a[i]>max) {
            max = a[i];
            t=i;
        }
    }
    max = a[t];
    printf("%d %d",str[t],max);
}
