#include <stdio.h>

int main() {
	int i, n, a = 1, b = 1, c = 2;
	scanf("%d", &n);
	n = n - 3;
	for (i = 0; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}//ì³²¨ÄÉÆõÊýÁÐc
	for (i = 2; i <= n; i++) {
		if (c % i == 0) {
			printf("%d", c);
			return 0;
		}
	}
	printf("yes");
	return 0;
}

