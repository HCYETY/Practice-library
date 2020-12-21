#include "PI.c"
/*  常用圆形体体积计算器的主控函数  */
double  vol_ball (void );
double  vol_cylind (void );
double  vol_cone (void );
void cal ( int sel )
  {switch (sel) {
    	case 1:
		 	printf ("球体积为：%.2f\n", vol_ball( ));
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
