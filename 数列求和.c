#include <stdio.h>

int main() {
	int i, j, n, a[30], c, b[30];
	float sum = 0;
	scanf("%d", &n);
	a[1] = 2;
	a[2] = 3;
	b[1] = 1;
	b[2] = 2;
	sum = 2.00 / 1 + 3.00 / 2;
	for (i = 3; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
		sum = sum + a[i] / b[i];
	}
	sum = sum + 0.005;
	printf("%.2f", sum);
	return 0;
}