/*
��Ŀ������
����n����(a1,a2,a3.......an)���ж��Ƿ���Դ���ѡ����������ʹ���ǵĺ�ǡ��Ϊ k,�о���� "YES",������� "NO"��
���ݷ�Χ��n<20;

����������
��һ������������n,k;
�ڶ�������n����a1 a2 ...... an
���������
�������һЩ��������Ϊk���"YES";�������"NO".

���룺
3 6
2 3 9
�����
NO

���룺
5 6
2 3 5 2 1
�����
YES
*/


#include <bits/stdc++.h>
using namespace std;

int n, k, a[25];

bool dfs(int i, int sum) {
 	if(i==n) {            //�ɼ�дΪif(x==n) return sum==k;
      if(sum==k)
         return 1;
  	   else
         return 0;
   }
   if(sum>k)  return 0;  //��֦
   if(dfs(i+1,sum))  return 1;
   if(dfs(i+1,sum+a[i]))  return 1;
}

int main()
{
	cin>>n>>k;
	for(int i=0; i<n; i++) {
  		cin>>a[i];
	}
	if(dfs(0, 0))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
