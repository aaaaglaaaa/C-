#include <stdio.h>
#include <math.h>

int function(int a, int b) {
	int n, count = 0, k, i, sum = 0, d, e;
	for (i = a; i <= b; i++) {
		n = 0;
		k = i;
		d = i;
		while (k != 0) {
			n++;
			k = k / 10;
		}
		if (n < 3)
			continue;
		else if (n >= 3) {
			sum = 0;
			while (d != 0) {
				e = d % 10;
				sum = sum + pow(e, n);
				d = d / 10;
			}
			if (sum == i)
				count++;
		}
	}
	return count;
}

int main() {
	int a, b, count;
	scanf("%d %d", &a, &b);
	count = function(a, b);
	printf("%d", count);
	return 0;
}