#include <stdio.h>
float cash;	/* ����ȫ�ֱ����������ֽ���� */
void income(float number), expend(float number); /* ��������  */
int main(void)
  {int choice;
   float value;	
   cash = 0; /* ��ʼ���=0 */
   printf("Enter operate choice(0--end, 1--income, 2--expend):");
   scanf("%d", &choice); /* ����������� */
   while(choice!=0) {	/*  ����������Ϊ0��ѭ������  */
	    if(choice==1 || choice==2) {
			printf("Enter cash value:"); 	/* ��������ֽ�� */
			scanf("%f", &value);
			if(value<0) {
				printf("error\n");continue;
			}
			if(choice==1) {
				income(value);    /* �������ã������ֽ����� */
			}else{
				expend(value);	 /* �������ã������ֽ�֧�� */
			 }
		printf("current cash:%.2f\n", cash);
	    }
	    printf("Enter operate choice(0--end, 1--income, 2--expend):");
	    scanf("%d", &choice);		/* ��������������� */
   }
   return 0;
  }
  
/* ��������ֽ����뺯�� */
void income(float number){
	if(number>0) {
		cash = cash + number;	/*  �ı�ȫ�ֱ���cash  */
	}
}
/* ��������ֽ�֧������ */
void expend(float number){
	if(cash-number>0) {
	    cash = cash - number;	/*  �ı�ȫ�ֱ���cash  */	
	}
}


