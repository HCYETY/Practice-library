extern Count;
//��ѯ�Ƿ�ҿƼ��ҿƵĿ�Ŀ 
void Adoption(struct student students [])
{
	int i;
	struct student adoption;
	printf("��������Ҫ��ѯ�Ƿ�ҿƵ��˵�ѧ�ţ�"); 
	scanf("%d", &adoption.num);
	for(i=0; i<Count; i++)
	{
		if(adoption.num==students [i].num)
		{
		    adoption=students[i];
    		if(students [i].math<60)
    		{
    		    printf("��ѧ�ҿ�!\n");
   			}
   			if(students [i].english<60)
    		{
    		    printf("Ӣ��ҿ�!\n");
   		 	}
    		if(students [i].computer<60)
    		{
    		    printf("������ҿ�!\n");
    		}
    		if(students [i].math>=60 && students [i].english>=60 && students [i].computer>=60)
    		{
    		    printf("ȫ��ͨ������!\n");
    		}
    		printf("\n");
		}
	}
}
