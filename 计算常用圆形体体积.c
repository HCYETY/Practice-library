# define  PI  3.141592654
void cal ( int sel );
double  vol_ball (void );
double  vol_cylind (void );
double  vol_cone (void );
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

/*  ����Բ������������������غ���  */
void cal ( int sel )
  {switch (sel) {
    	case 1: 	printf ("�����Ϊ��%.2f\n", vol_ball( ));
			break;
      case 2: 	printf ("Բ�����Ϊ��%.2f\n", vol_cylind( ) );
			break;
      case 3: 	printf ("Բ׶���Ϊ��%.2f\n", vol_cone( ) );
			break;
	}
  }

/*  ����������� V=4*PI*r*r*r/3 */
double vol_ball( )
  {double r ;
   printf("��������İ뾶��");
   scanf("%lf",&r);
   return(4.0/3.0*PI*r*r*r);
  }

/* ����Բ����� V=PI*r*r*h     */
double vol_cylind( )
  {double r , h ;
   printf("������Բ���ĵ�Բ�뾶�͸ߣ�");
   scanf("%lf%lf",&r,&h);
   return(PI*r*r*h);
  }

/*  ����Բ׶��� V=h/3*PI*r*r    */
double vol_cone ( )
  {double r , h ;
   printf ("������Բ׶�ĵ�Բ�뾶�͸ߣ�");
   scanf ("%lf%lf",&r,&h);
   return (PI*r*r*h/3.0);
  }
