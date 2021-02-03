#include <stdio.h>
#include <string.h>

int main() {
	char a[100], b[100], f[100];
	int d, c, i = 0, j, k, m;
	gets(a);
	scanf("%d\n%d\n", &c, &d);
	while (i < d) {
		gets(b);
		if (c == 1) {
			for (j = 0; j < strlen(b); j++) {
				if (a[0] == b[j]) {
					m = j;
					for (k = 0; k < strlen(a); k++) {
						f[k] = b[j];
						j++;
					}
					if (strcmp(a, f) == 0) {
						puts(b);
					}
				}
				j = m;
			}
		}
		if (c == 0) {
			strlwr(a);
			strlwr(b);
			for (j = 0; j < strlen(b); j++) {
				if (a[0] == b[j]) {
					m = j;
					for (k = 0; k < strlen(a); k++) {
						f[k] = b[j];
						j++;
					}
					if (strcmp(a, f) == 0) {
						puts(b);
					}
				}
				j = m;
			}
		}
	}
	return 0;
}