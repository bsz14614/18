#include <stdio.h>

int main() {
	int a, b, c, d, e;
	printf("�����������ʼ¥�㣬���������������û�����ʼ¥����Ŀ��¥��\n");
	scanf("%d", &e);
	scanf("%d%d", &a, &b);
	scanf("%d%d", &c, &d);
	int x, y;
	x = a - e ;
	y = c - e ;
	if (x < 0) {
		x = -x;
	}
	if (y < 0) {
		y = -y;
	}
	if (x <= y) {
		if ((a < c && c < b) || (a > c && c > b)) {
			if ((c < d && d < b) || (c > d && d > b)) {
				printf("%d %d %d %d %d\n", e, a, c, d, b);
			} else {
				printf("%d %d %d %d %d\n", e, a, c, b, d);
			}
		} else {
			printf("%d %d %d %d %d\n", e, a, b, c, d);
		}

	} else if (x > y) {
		if ((c < a && a < d) || (c > a && a > d)) {
			if ((a < b && b < d) || (a > b && b > d)) {
				printf("%d %d %d %d %d\n", e, c, a, b, d);
			} else {
				printf("%d %d %d %d %d\n", e, c, a, d, b);
			}
		} else {
			printf("%d %d %d %d %d\n", e, c, d, a, b);
		}
	}
	return 0;
}