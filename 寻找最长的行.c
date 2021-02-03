#include <stdio.h>
#include <string.h>

int main() {
	char a[200], b[200];
	int n, max = 0;
	while (1) {
		gets(a);
		if (strcmp(a, "***end***") == 0)
			break;
		n = strlen(a);
		if (n > max) {
			max = n;
			strcpy(b, a);
		}
	}
	printf("%d\n%s\n", max, b);
	return 0;
}