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


#include <bits/stdc++.h>
using namespace std;

boos dfs(int i, int sum) {
	if(sum>k) return 0;
	if()
}

int main()
{
	int n, k, a[25];
	cin>>n>>k;
	for(int i=0; i<n; i++) {
  		cin>>a[i];
	}
	if(dfs())
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}


// i Ϊ�� i ������ a[i-1]��sum Ϊ��ǰ���ֺ�
bool dfs(int i, int sum)
{
	if (i == n){	// DFS ֹͣ����
		return sum == k;
	}
	if (dfs(i + 1, sum)){	// �¸����ݲ���
		return true;
	}
	if (dfs(i + 1, sum + a[i])){	// �¸����ݼ�
		return true;
	}

	return false;	// �������н�����޷�������
}

bool dfs(int x,int sum)   //x��¼���  sumΪ��¼�ĺ�
{
    if(x==n)              //�ɼ�дΪif(x==n) return sum==k;
    {
        if(sum==k)
            return 1;
        else
            return 0;
    }
    if(sum>k)  return 0;  //��֦
    if(dfs(x+1,sum))           //����¸���û��ѡ��
    {
        b[x+1]=0;           //ע  ���ﲻ��b[x]!!!!!  �ð�  �ұȽϲˡ�������
        return 1;
    }
    if(dfs(x+1,sum+a[x+1]))    //����¸�����ѡ��
    {
        b[x+1]=1;
        return 1;
    }
}
