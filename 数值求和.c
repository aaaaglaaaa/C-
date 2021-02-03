#include <stdio.h>

int main() {
	int sum = 0, a[21][21], N, i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &a[i][j]);
			if (i == j || i + j == N - 1) {
				sum = sum + a[i][j];
			}
		}
	}
	printf("%d", sum);
	return 0;
}