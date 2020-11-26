#include <stdio.h>
int main(void)
  {int i, k = 0;																										;
   char line[80];
	printf("Enter a string: ");
   while((line[k] = getchar() ) != '\n') {
   	k++;
	}
   line[k] = '\0';
   i = 0;        /* i是字符串首字符的下标 */
   k = k -1;    /* k是字符串尾字符的下标 */
   while(i<k){
	   if(line[i]!=line[k]) {
	   	break;
		}
	   i++;
	   k--;
   }
   if(i>=k) {
		printf("It is a plalindrome\n");
   }else {
		printf("It is not a plalindrome\n");
	}
	return 0;
  }

