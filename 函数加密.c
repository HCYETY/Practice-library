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
  	 theC = theC - 'a' + 'A'; /*小写字母转换为大写字母*/
 	 j = theC % 10;
 	 return j;
   }else if(theC >= 'A' && theC <= 'Z') {
      j = theC % 10; /*大写字母转换为整数*/
      return j;
    }else{
		return -1;
	 }
  }
