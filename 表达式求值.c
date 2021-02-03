#include <stdio.h>
#include <string.h>

int main() {
	char a[20], b[10], c[10], d;
	int i = 0, sum1 = 0, sum2 = 0, k;
	gets(a);
	while (a[i] != '\0') {
		if (a[i] == '/' || a[i] == '-' || a[i] == '+' || a[i] == '*' || a[i] == '%') {
			d = a[i];
		}
		while (a[i] >= '0' && a[i] <= '9') {
			sum1 = sum1 * 10 + (a[i] - '0');
		}
		i++;
	}
	printf("%d %d %c", sum1, sum2, d);
	return 0;
}