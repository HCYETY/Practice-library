#include <stdio.h>

int getLet(char theC);

int main ()
  {int i;
   char character;
   for(i = 1; i <= 6; i++) {
   	  scanf ("%c", &character);
      getLet(character);
      printf("%d",getLet(character));
   }
   return 0;
}

int getLet(char theC)
  {int j;
   if(theC >= 'a' && theC <= 'z') {
  	 theC = theC - 'a' + 'A'; /*Сд��ĸת��Ϊ��д��ĸ*/
 	 j = theC % 10;
 	 return j;
   }else if(theC >= 'A' && theC <= 'Z') {
      j = theC % 10; /*��д��ĸת��Ϊ����*/
      return j;
    }else{
		return -1;
	 }
  }
