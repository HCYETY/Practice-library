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
void position(int n);
int main()
{
	int T, n, x, y;
	int i, j, k;
	scanf("%d", &T);
	for(i=1; i<=T; i++) {
		scanf("%d\n", &n);
	}
	for(i=1; i<=T; i++) {
  		for(j=1; j<=5; j++) {
  			for(k=1; j<=5; j++) {

	  	   }
		}
		printf("Case %d:%d %d", i, x, y);
	}
}

void position(int n) {
	int x, y;
	switch(n) {
			case "1":
				x=1, y=1;
				break;
			case "2":
	 			x=1, y=2;
				break;
			case "3":
	 			x=2, y=2;
				break;
			case "4":
	 			x=2, y=1;
				break;
			case "5":
	 			x=3, y=1;
				break;
			case "6":
	 			x=3, y=2;
				break;
			case "7":
	 			x=3, y=3;
				break;
			case "8":
	 			x=2, y=3;
				break;
			case "9":
	 			x=1, y=3;
				break;
			case "10":
	 			x=1, y=4;
				break;
			case "11":
	 			x=2, y=4;
				break;
			case "12":
	 			x=3, y=4;
				break;
			case "13":
	 			x=4, y=4;
				break;
			case "14":
	 			x=4, y=3;
				break;
			case "15":
	 			x=4, y=2;
				break;
			case "16":
	 			x=4, y=1;
				break;
			case "17":
	 			x=5, y=1;
				break;
			case "18":
	 			x=5, y=2;
				break;
			case "19":
	 			x=5, y=3;
				break;
			case "20":
	 			x=5, y=4;
				break;
			case "21":
	 			x=5, y=5;
				break;
			case "22":
	 			x=4, y=5;
				break;
			case "23":
	 			x=3, y=5;
				break;
			case "24":
	 			x=2, y=5;
				break;
			case "25":
	 			x=1, y=5;
				break;
		}
		return x,y;
}
