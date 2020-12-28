extern Count;
//查询是否挂科及挂科的科目 
void Adoption(struct student students [])
{
	int i;
	struct student adoption;
	printf("请输入需要查询是否挂科的人的学号："); 
	scanf("%d", &adoption.num);
	for(i=0; i<Count; i++)
	{
		if(adoption.num==students [i].num)
		{
		    adoption=students[i];
    		if(students [i].math<60)
    		{
    		    printf("数学挂科!\n");
   			}
   			if(students [i].english<60)
    		{
    		    printf("英语挂科!\n");
   		 	}
    		if(students [i].computer<60)
    		{
    		    printf("计算机挂科!\n");
    		}
    		if(students [i].math>=60 && students [i].english>=60 && students [i].computer>=60)
    		{
    		    printf("全部通过考试!\n");
    		}
    		printf("\n");
		}
	}
}
