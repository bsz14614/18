#include <stdio.h>

int main() {
	int a, b, c;
	printf("������A B C�������ֱ��ʾ�����ڵĲ�����Ŀ������͵������ڲ���\n");
	scanf("%d%d%d", &a, &b, &c);
	int x, y;
	x = a - c ;
	y = a - b ;
	if (x < 0) {
		x = -x;
	}
	if (y < 0) {
		y = -y;
	}
	printf("%d 0 0\n", c);
	printf("%d %d 1\n", a, x);
	printf("%d %d 0\n", b, x + y);
	return 0;
}