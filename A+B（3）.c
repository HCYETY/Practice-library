/*
���� a+b ���Ա�׼��ʽ����ܺ�----Ҳ����˵�������λ��ʼÿ����λ���ӽ�һ�����ţ�ǧλ�ָ�������������������λ������ӡ�

�����ʽ:
��һ�У������������� a �� b��?10^6��a,b��10^6
�����ʽ:
��һ�У��Ա�׼��ʽ��� a+b �ĺ͡�

��������:-1000000 9
�������:-999,991
*/

#include <iostream>
using namespace std;
int main()
  {int a, b;
   cin >> a >> b;
   int c = a + b;
   string num = to_string(c);
   string res;
   for (int i = num.size() - 1, j = 0; i >= 0; i -- ) {
      res = num[i] + res;
      ++ j;
      if (j % 3 == 0 && i && num[i - 1] != '-') {
      	res = ',' + res;
		}
	}
   cout << res << endl;
   return 0;
  }

