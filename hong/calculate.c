#include <stdio.h>
#include "cricleFunctions.c"

int main (void)
  {int sel;
   while (1) {
		printf ("  1-�����������\n");
	   printf ("  2-����Բ�����\n");
	   printf ("  3-����Բ׶���\n");
	   printf ("  ����-�˳���������\n");
	   printf ("  ������������" );
	   scanf ("%d",&sel);
	   if (sel < 1 || sel > 3)    {
            break;     	/*  �����1~3��ѭ������  */
      } else {
	       cal (sel );	/*  ����1~3������cal()  */
	   }
	}
   return 0;
  }
