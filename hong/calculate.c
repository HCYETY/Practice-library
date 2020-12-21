#include <stdio.h>
#include "cricleFunctions.c"

int main (void)
  {int sel;
   while (1) {
		printf ("  1-计算球体体积\n");
	   printf ("  2-计算圆柱体积\n");
	   printf ("  3-计算圆锥体积\n");
	   printf ("  其他-退出程序运行\n");
	   printf ("  请输入计算命令：" );
	   scanf ("%d",&sel);
	   if (sel < 1 || sel > 3)    {
            break;     	/*  输入非1~3，循环结束  */
      } else {
	       cal (sel );	/*  输入1~3，调用cal()  */
	   }
	}
   return 0;
  }
