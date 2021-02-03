#include <stdio.h>

int main() {
	int a[20][20], i, j, sum[40] = {0};
	int m, t;
	scanf("%d\n", &m);
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
			sum[i] = sum[i] + a[i][j];
			sum[j + m] = sum[j + m] + a[i][j];
			if (i + j + 1 == m) {
				sum[2 * m + 1] = sum[2 * m + 1] + a[i][j];
			}
		}
		sum[2 * m] = sum[2 * m] + a[i][i];
	}
	for (i = 0; i < 2 * m + 1; i++) {
		for (j = 0; j < 2 * m + 1 - i; j++) {
			if (sum[j] < sum[j + 1]) {
				t = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 2 * m + 2; i++) {
		printf("%d ", sum[i]);
	}
	printf("\n");
	return 0;
}