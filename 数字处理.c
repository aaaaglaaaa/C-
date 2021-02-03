#include <stdio.h>

int fun(int n) {
	int sum = 0;
	while (n != 0) {
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}

int main() {
	int sum = 0, n;
	scanf("%d", &n);
	sum = fun(n);
	while (sum / 10 != 0) {
		n = sum;
		sum = fun(n);
	}
	printf("%d", sum);
	return 0;
}