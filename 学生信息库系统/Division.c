extern Count;
//按照平均分排名给学生分配班级 
void Division(struct student students [])
{
	int i=0,class,k,count;
	int a[100][40];	
	if(Count%40==0)
	{
		count=Count/2;
	}
	else
	{
		count=Count/2+1;
	}
	printf("分班结果：\n");
	if(i<Count)
	{	
		
		for(class=1; class<=count; class++)//行 
		{
			for(k=0; k<2 && k<Count; k++)
			{
				a[class][k]=students [i].num;
				printf("学号为%d的学生班级为：%d班\n",students [i].num,class);
				i=i+1;
			}
			k+1;
		}
	}
}
