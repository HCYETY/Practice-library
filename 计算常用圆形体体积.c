# define  PI  3.141592654
void cal ( int sel );
double  vol_ball (void );
double  vol_cylind (void );
double  vol_cone (void );
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

/*  常用圆形体体积计算器的主控函数  */
void cal ( int sel )
  {switch (sel) {
    	case 1: 	printf ("球体积为：%.2f\n", vol_ball( ));
			break;
      case 2: 	printf ("圆柱体积为：%.2f\n", vol_cylind( ) );
			break;
      case 3: 	printf ("圆锥体积为：%.2f\n", vol_cone( ) );
			break;
	}
  }

/*  计算球体体积 V=4*PI*r*r*r/3 */
double vol_ball( )
  {double r ;
   printf("请输入球的半径：");
   scanf("%lf",&r);
   return(4.0/3.0*PI*r*r*r);
  }

/* 计算圆柱体积 V=PI*r*r*h     */
double vol_cylind( )
  {double r , h ;
   printf("请输入圆柱的底圆半径和高：");
   scanf("%lf%lf",&r,&h);
   return(PI*r*r*h);
  }

/*  计算圆锥体积 V=h/3*PI*r*r    */
double vol_cone ( )
  {double r , h ;
   printf ("请输入圆锥的底圆半径和高：");
   scanf ("%lf%lf",&r,&h);
   return (PI*r*r*h/3.0);
  }
