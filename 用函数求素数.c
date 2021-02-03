#include <stdio.h>

int fun(int x) {
	int i, j, count = 0;
	for (i = 1; i <= x; i++) {
		for (j = 2; j <= i; j++)
			if (i % j == 0) {
				if (i != j)
					break;
				if (i == j) {
					count++;
				}
			}
	}
	return count;
}

int funn(int x) {
	int i, j, count;
	for (i = 1; i <= x; i++) {
		for (j = 2; j <= i; j++)
			if (i % j == 0) {
				if (i != j)
					break;
				if (i == j) {
					printf("%d ", i);
				}
			}
	}
	return i;
}

int main() {
	int fun(int x);
	int x = 10, count = 0, i;
	scanf("%d", &x);
	count = fun(x);
	printf("%d\n", count);
	funn(x);
	return 0;
}