# include <stdio.h>
struct student {                  /* 学生信息结构定义 */
   int studentId;                 /* 学号 */
   char name[10], phoneNumber[30];/* 姓名，电话号码 */
   int computer, english, math;   /* 三门课程成绩 */
   double average;                /* 个人平均成绩 */
   struct address {               /* 嵌套结构体 */
    	char city[10];
   	char street[20];
    	int code;
    	int zip;
	}add;
}s1;
int main(void)
  {int i, num, phoneNumber;
	char city;
   struct student s1,max;         /* 定义结构变量 */
   printf ("Input num: ");
   scanf ("%d", &num);
   printf ("Input the student's studentId, name, city, course scores and phoneNumber\n");
   for (i = 1; i <= num; i++){
   	printf ("No.%d: ", i);
      scanf ("%d%s%s%d%d%d%s", &s1.studentId, s1.name, s1.add.city, &s1.math, &s1.english, &s1.computer, s1.phoneNumber);
      s1.average = (s1.math + s1.english + s1.computer) / 3.0;
      if (i == 1) {
			max = s1;                /* 结构变量 操作 */
		}
      if (max.average < s1.average) {
      	max = s1;
		}
   }
   printf("studentId:%d, name:%s, city:%s, average:%.2lf, phoneNumber:%s\n", max.studentId, max.name, s1.add.city, max.average, s1.phoneNumber);
   return 0;
  }

