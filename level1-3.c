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
	if (x < y) {
		printf("%d %d %d %d %d", e, a, b, c, d);
	} else if (x > y) {
		printf("%d %d %d %d %d", e, c, d, a, b);
	} else {
		int m, n;
		m = a - b ;
		n = c - d ;
		if (m < 0) {
			m = -m;
		}
		if (n < 0) {
			n = -n;
		}
		if (m <= n) {
			printf("%d %d %d %d %d", e, a, b, c, d);
		} else if (m > n) {
			printf("%d %d %d %d %d", e, c, d, a, b);
		}

	}
	return 0;
}