extern Count;
//����ƽ����������ѧ������༶ 
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
	printf("�ְ�����\n");
	if(i<Count)
	{	
		
		for(class=1; class<=count; class++)//�� 
		{
			for(k=0; k<2 && k<Count; k++)
			{
				a[class][k]=students [i].num;
				printf("ѧ��Ϊ%d��ѧ���༶Ϊ��%d��\n",students [i].num,class);
				i=i+1;
			}
			k+1;
		}
	}
}
