#include <stdio.h>
#include <string.h>			/* ����"�ַ����ȽϺ���"��Դ�ļ� */

int getindex (char *str);	/* �������� */

int main()
  {int num;
   char str[7];
   
   scanf("%s",str);
   num = getindex(str);
   printf("%d\n",num);
   return 0;
  }
  
int getindex(char *str) {
	int i;
	char * day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

	for(i=0; i<=6; i++) {
		if(strcmp(str, day[i]) == 0)		/* strcmp���������ַ����ȽϺ��� */
		break;
	}
	if(i == 7)
		i = -1;

    return i;
}
	
