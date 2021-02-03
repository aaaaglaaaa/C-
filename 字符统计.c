#include <stdio.h>
#include <string.h>

int main() {
	int n, sum = 0, i;
	char a[100], c;
	scanf("%c %d\n", &c, &n);
	gets(a);
	if (n == 1) {
		for (i = 0; i < strlen(a); i++) {
			if (a[i] == c)
				sum++;
		}
	} else {
		if (a[i] >= 'a' && a[i] <= 'z') {
			for (i = 0; i < strlen(a); i++) {
				if (a[i] == c || a[i] == c - 32)
					sum++;
			}
		}
		if (a[i] >= 'A' && a[i] <= 'Z') {
			for (i = 0; i < strlen(a); i++) {
				if (a[i] == c || a[i] == c + 32)
					sum++;
			}
		}
	}
	printf("%d", sum);
	return 0;
}