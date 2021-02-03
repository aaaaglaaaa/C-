#include <stdio.h>

int main() {
	int i, N, max = 0, a[81], k;
	scanf("%d\n", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		max = max >= a[i] ? max : a[i];
	}
	for (i = 0; i < N; i++) {
		if (max == a[i]) {
			k = i;
			break;
		}
	}
	printf("%d %d %d", N, max, k);
	return 0;
}