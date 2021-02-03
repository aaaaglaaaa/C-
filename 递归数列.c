#include <stdio.h>

double function(int n) {
	double a[11], k;
	int i;
	a[1] = 1.0;
	for (i = 2; i <= n; i++) {
		a[i] = 1.0 / (a[i - 1] + 1);
	}
	k = a[n];
	return k;
}

int main() {
	double A;
	int n;
	scanf("%d", &n);
	A = function(n);
	printf("%.6lf", A);
	return 0;
}