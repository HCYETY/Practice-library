#include <stdio.h>
#include <string.h>			/* 调用"字符串比较函数"的源文件 */

int getindex (char *str);	/* 函数声明 */

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
		if(strcmp(str, day[i]) == 0)		/* strcmp函数——字符串比较函数 */
		break;
	}
	if(i == 7)
		i = -1;

    return i;
}
	
