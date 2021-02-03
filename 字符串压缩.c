#include <string.h>
#include <stdio.h>

int main() {
	char a[51], b[100];
	int i, j = 0;
	gets(a);
	for (i = 0; i <= 100; i++) {
		if ((a[i] >= 'a' && a[i] <= 'z')) {
			printf("%c", a[i]);
		}
		if (a[i] >= '0' && a[i] <= '9') {
			if (a[i + 1] >= '0' && a[i + 1] <= '9') {
				j = (a[i] - '0') * 10 + a[i + 1] - '0';
				while (j > 1) {
					printf("%c", a[i - 1]);
					j--;
				}
				i++;
			} else {
				j = a[i] - '0';
				while (j > 1) {
					printf("%c", a[i - 1]);
					j--;
				}
			}
		}
		if (a[i] == '\0')
			break;
	}
	return 0;
}