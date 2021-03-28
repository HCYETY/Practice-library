最近， LOL，王者农药，都开启了新的玩法-自走棋；
想必你也一定听说过，可能还玩过，甚至可能是个王者；
没错，今天A学长也要下棋，不过不是用电子设备，而是真正的“自”走棋；
有一个N * N的大棋盘, 如下图所示,
1 所在的位置为 (1, 1)
2 所在的位置为 (1, 2)
3 所在的位置为 (2, 2)
4 所在的位置为 (2, 1)
5 所在的位置为 (3, 1)
…….
以此类推;

A学长按着1 2 3 4 …… 的顺序走了好久好久。 最后，A学长有点晕，他晕的只能看到地上的数字了
他现在很慌，你知道的，当人不知道自己在哪里的时候。
这个时候你能帮助他吗？ 告诉A学长他所在的位置


Input
第一行输入包括一个整数T,代表T组输入; (T <= 200)
接下来T行, 每行一个整数n, 代表所在位置的数值 (n <= 1e15)
Output
输出格式为 : Case k : x y
k代表第几组数据, x, y 代表当前数值所处位置的坐标, 中间用空格隔开

Sample Input
3
8
20
25
Sample Output
Case 1: 2 3
Case 2: 5 4
Case 3: 1 5


#include <stdio.h>
void position(int n);
int main()
{
	int T, n, x, y;
	int i, j, k;
	scanf("%d", &T);
	for(i=1; i<=T; i++) {
		scanf("%d\n", &n);
	}
	for(i=1; i<=T; i++) {
  		for(j=1; j<=5; j++) {
  			for(k=1; j<=5; j++) {

	  	   }
		}
		printf("Case %d:%d %d", i, x, y);
	}
}

void position(int n) {
	int x, y;
	switch(n) {
			case "1":
				x=1, y=1;
				break;
			case "2":
	 			x=1, y=2;
				break;
			case "3":
	 			x=2, y=2;
				break;
			case "4":
	 			x=2, y=1;
				break;
			case "5":
	 			x=3, y=1;
				break;
			case "6":
	 			x=3, y=2;
				break;
			case "7":
	 			x=3, y=3;
				break;
			case "8":
	 			x=2, y=3;
				break;
			case "9":
	 			x=1, y=3;
				break;
			case "10":
	 			x=1, y=4;
				break;
			case "11":
	 			x=2, y=4;
				break;
			case "12":
	 			x=3, y=4;
				break;
			case "13":
	 			x=4, y=4;
				break;
			case "14":
	 			x=4, y=3;
				break;
			case "15":
	 			x=4, y=2;
				break;
			case "16":
	 			x=4, y=1;
				break;
			case "17":
	 			x=5, y=1;
				break;
			case "18":
	 			x=5, y=2;
				break;
			case "19":
	 			x=5, y=3;
				break;
			case "20":
	 			x=5, y=4;
				break;
			case "21":
	 			x=5, y=5;
				break;
			case "22":
	 			x=4, y=5;
				break;
			case "23":
	 			x=3, y=5;
				break;
			case "24":
	 			x=2, y=5;
				break;
			case "25":
	 			x=1, y=5;
				break;
		}
		return x,y;
}
