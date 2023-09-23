#include<stdio.h>
int elevator(int*m);
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int*m = &c;
	printf("请输入A B两个数分别表示人所在的层数，目标层数\n");
	scanf("%d%d",&a,&b);
	elevator(m);
	int x, y;
	x = a - *m ;
	y = a - *m ;
	if (x < 0) {
		x = -x;
	}
	if (y < 0) {
		y = -y;
	}
	printf("%d 0 0\n", *m);
	printf("%d %d 1\n", a, x);
	printf("%d %d 0\n", b, x + y);
	return 0;
}