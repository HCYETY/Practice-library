С������������Ů�ѷֱ�վ��һ�������ϵ�������ͬλ�ã����������˶���������������ƶ�һ����λ��+1��-1������Ȼ������Ҳ����ѡ�񲻶����������ƶ�������֮��������С����͡�

�����ʽ:
ÿ�а�������������a,b��c (1��a,b,c��1e9)���������˵�λ��

�����ʽ:
���һ����������ʾ�ƶ�֮������֮����С����ͣ�����ͣ�|a-b|+|a-c|+|b-c|��

��������:
���������һ�����롣���磺

3 3 4
�������:
�����������Ӧ����������磺

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
