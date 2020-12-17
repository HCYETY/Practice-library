# include <stdio.h>

int update_score (struct student *p, int n, int num, int course, int score);

struct student {            /* 学生信息结构定义 */
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

struct student2 {
	char studentName;
}s2;

int main(void)
  {int i, num, phoneNumber;
   int course, n, pos, score;
	char city;
   struct student s1,max;         /* 定义结构变量 */
   struct student students[50];   /* 定义结构数组 */
   printf ("Input num: ");
   scanf ("%d", &num);
   printf ("Input the student's studentId, name, city, course scores and phoneNumber\n");
   for (i = 1; i <= num; i++){
   	printf ("No.%d: ", i);
      scanf ("%d%s%s%d%d%d%s", &student[i-1].studentId, s1.name, s1.add.city, &s1.math, &s1.english, &s1.computer, s1.phoneNumber);
      s1.average = (s1.math + s1.english + s1.computer) / 3.0;
		pos = update_score(students, n, num, course, score);
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

/* 自定义函数，修改学生成绩 */
int update_score (struct student *p, int studentId, int course scores, int course, int score) {
	int i,pos;
	for (i = 0; i < n; i++, p++) {  	/* 按学号查找 */
	   if (p->course scores == course scores)   {
         break;
      }
	}
	if (i < n) { 	/* 找到，修改成绩 */
	   switch (course) {
	      case 1: p->math = score; break;
	      case 2: p->english = score; break;
         case 3: p->computer = score; break;
	   }
	   pos = i;  		/* 被修改学生在数组中的下标 */
	}else  {      /* 无此学号 */
	    pos = -1;
	}
	return pos;
  }
