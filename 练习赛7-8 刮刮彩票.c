/*
���ιβ�Ʊ����һ��������Ϸ�����һ��С��Ϸ��
ÿ����Ϸ��һ��õ�һ�Ų�Ʊ��������� 9 �����֣��ֱ�Ϊ���� 1 ������ 9�����ָ����ظ������� 3��3 �ġ��Ź�����ʽ�Ų��ڲ�Ʊ�ϡ�
����Ϸ��ʼʱ�ܿ���һ��λ���ϵ����֣�����λ���ϵ����־����ɼ��������ѡ������λ�õ����ֹο���������Ҿ��ܿ����ĸ�λ���ϵ������ˡ��������ٴ� 3 �ᡢ3 ����2 б�� 8 ����������ѡһ�����򣬷������������ֵĺͿɸ������б����жҽ�����ö�Ӧ����Ľ�ҡ�

���ֺϼ�	��ý��	���ֺϼ�	��ý��
6			10000			16			72
7			36				17			180
8			720			18			119
9			360			19			36
10			80				20			306
11			252			21			1080
12			108			22			144
13			72				23			1800
14			54				24			3600
15			180
��������д��һ��ģ�����ģ����ҵ���Ϸ���̡�

�����ʽ:
�����һ���ָ���һ�źϷ��Ĳ�Ʊ������ 3 �� 3 �и��� 0 �� 9 �����֡�0 ��ʾ�������λ���ϵ����ֳ�ʼʱ���ܿ����ˣ������ǲ�Ʊ�ϵ�����Ϊ 0��
�ڶ���������ҹο�������λ�ã���Ϊ���У�ÿ�а���ʽ x y ������ҹο���λ�õ��кź��кţ���Ŀ�ж������Ͻǵ�λ��Ϊ�� 1 �С��� 1 �С��������ݱ�֤��Ҳ����ظ��ο��ѹο������֡�
���һ���ָ������ѡ��ķ��򣬼�һ�������� 1 �� 3 ��ʾѡ�����ĵ�һ�С��ڶ��С������У�4 �� 6 ��ʾ����ĵ�һ�С��ڶ��С������У�7��8�ֱ��ʾ���ϵ����µ����Խ��ߺ����ϵ����µĸ��Խ��ߡ�
�����ʽ:
����ÿһ���ο��Ĳ�������һ�����������ܿ��������֡�������ѡ��ķ�����һ���������һ�õĽ��������

��������:
1 2 3
4 5 6
7 8 0
1 1
2 2
2 3
7
�������:
1
5
6
180
*/
/*
#include <stdio.h>
void findmoney(int sum);
int main()
{
    int add[3][3], num;
    int i, j;
    int n1, n2, n3, n4, n5, n6, money, sum;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &add[i][j]);
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(add[i][j]==0) {
                add[i][j] = 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9;
                add[i][j] = 9;
            }
        }
    }
    scanf("%d %d\n", &n1, &n2);
    scanf("%d %d\n", &n3, &n4);
    scanf("%d %d\n", &n5, &n6);
    scanf("%d", &num);
    printf("%d\n", add[n1-1][n2-1]);
    printf("%d\n", add[n3-1][n4-1]);
    printf("%d\n", add[n5-1][n6-1]);
    if(num==1) {
        sum = add[0][0] + add[0][1] + add[0][2];//6
        findmoney(sum);
    } else if(num==2) {
        sum = add[1][0] + add[1][1] + add[1][2];//15
        findmoney(sum);
    } else if(num==3) {
        sum = add[2][0] + add[2][1] + add[2][2];//15
        findmoney(sum);
    } else if(num==4) {
        sum = add[0][0] + add[1][0] + add[2][0];//12
        findmoney(sum);
    } else if(num==5) {
        sum = add[0][1] + add[1][1] + add[2][1];//15
        findmoney(sum);
    } else if(num==6) {
        sum = add[0][2] + add[1][2] + add[2][2];//9
        findmoney(sum);
    } else if(num==7) {
        sum = add[0][0] + add[1][1] + add[2][2];//6
        findmoney(sum);
    } else {
        sum = add[0][2] + add[1][1] + add[2][0];//15
        findmoney(sum);
    }
}

void findmoney(int sum)
{
    int money;
    if(sum == 6) money = 10000;
    else if(sum == 7)  money = 36;
    else if(sum == 8)  money = 720;
    else if(sum == 9)  money = 360;
    else if(sum == 10)  money = 80;
    else if(sum == 11)  money = 252;
    else if(sum == 12)  money = 108;
    else if(sum == 13)  money = 72;
    else if(sum == 14)  money = 54;
    else if(sum == 15)  money = 180;
    else if(sum == 16)  money = 72;
    else if(sum == 17)  money = 180;
    else if(sum == 18)  money = 119;
    else if(sum == 19)  money = 36;
    else if(sum == 20)  money = 306;
    else if(sum == 21)  money = 1080;
    else if(sum == 22)  money = 144;
    else if(sum == 23)  money = 1800;
    else if(sum == 24)  money = 3600;
    printf("%d\n", money);
}
*/
#include <stdio.h>
int main()
{
    int add[3][3]; // 3*3��"�Ź���"
    int digits[10];	// ��ǳ�ʼ�����0~9�У��Ǹ�����δ������
    int x, y; // �к���
    int num = 0; // ���ѡ��ķ���
    int sum; // ��Ӧ�ĵ���
    int money[25] = {0,0,0,0,0,0,10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600}; // ��Ӧ�������Ի�õĽ��
    // ��ʼ��3*3��������
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			scanf("%d",&add[i][j]);
			if(add[i][j]==0){   // 0��Ҫ������¼ ������¼λ��
				x = i;
				y = j;
			}else{
				digits[add[i][j]] = 1; // ��ʾ��λ���ϵ����ֻ����ɼ�
			}
		}
	}
	// ���� digits���飬���1~9�Ƿ��г�ʼ�ɼ���
	for(int i=1;i<=9;i++){
		if(digits[i]==0){	// �У���ֵ������
			add[x][y] = i;
			break;
		}
	}
    // ���3��Ҫ�ο��ļ�¼
	for(int i=1;i<=3;i++){
		scanf("%d %d",&x,&y);
		printf("%d\n",add[x][y]);	// �����Ӧλ�õ�ֵ
	}
    // ���뷽��
	scanf("%d",&num);
	if(num<=3){	// ��
		for(int i=1;i<=3;i++){
			sum += add[num][i];
		}
	}else if(num<=6){	// ��
		for(int i=1;i<=3;i++){
			sum += add[i][num-3];
		}
	}else if(num==7){	// ���Խ���
		for(int i=1;i<=3;i++){
			sum += add[i][i];
		}
	}else if(num==8){	// ���Խ���
		for(int i=1;i<=3;i++){
			sum += add[i][4-i];
		}
	}
    // �����һ�õĽ������
    printf("%d\n",money[sum]);
}
