����� LOL������ũҩ�����������µ��淨-�����壻
�����Ҳһ����˵�������ܻ���������������Ǹ����ߣ�
û������Aѧ��ҲҪ���壬���������õ����豸�����������ġ��ԡ����壻
��һ��N * N�Ĵ�����, ����ͼ��ʾ,
1 ���ڵ�λ��Ϊ (1, 1)
2 ���ڵ�λ��Ϊ (1, 2)
3 ���ڵ�λ��Ϊ (2, 2)
4 ���ڵ�λ��Ϊ (2, 1)
5 ���ڵ�λ��Ϊ (3, 1)
����.
�Դ�����;

Aѧ������1 2 3 4 ���� ��˳�����˺þúþá� ���Aѧ���е��Σ����ε�ֻ�ܿ������ϵ�������
�����ںܻţ���֪���ģ����˲�֪���Լ��������ʱ��
���ʱ�����ܰ������� ����Aѧ�������ڵ�λ��


Input
��һ���������һ������T,����T������; (T <= 200)
������T��, ÿ��һ������n, ��������λ�õ���ֵ (n <= 1e15)
Output
�����ʽΪ : Case k : x y
k����ڼ�������, x, y ����ǰ��ֵ����λ�õ�����, �м��ÿո����

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
      LL t=(LL)sqrt(n);//n����/����
      printf("Case %d: ",Case++);
      if(t*t==n) {//ƽ����ϵ
         if(t%2)//����ʱ������Ϊ1
            printf ("1 %lld\n",t);
         else//ż��ʱ������Ϊ1
         	printf ("%lld 1\n",t);
      } else {//��Ϊƽ����ϵʱ
         LL circle = t + 1;//Ȧ��
         LL minn = (circle-1) * (circle-1) + 1;//һȦ����С����
         if(circle%2) {//����Ȧ
            if(minn+circle-1>=n)
               printf("%lld %lld\n",circle,n-minn+1);
            else
               printf("%lld %lld\n",circle*circle-n+1,circle);
         } else {//ż��Ȧ
            if(minn+circle-1>=n)
               printf("%lld %lld\n",n-minn+1,circle);
            else
               printf("%lld %lld\n",circle,circle*circle-n+1);
         }
      }
   }
}
