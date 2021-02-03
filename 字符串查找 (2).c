#include <stdio.h>
#include <string.h>

int fun(char a[]) {
	int i, n, k = 0;
	n = strlen(a);
	for (i = 0; i < n; i++) {
		if ((a[i] <= 122 && a[i] >= 97) || (a[i] <= 90 && a[i] >= 65))
			k++;
	}
	printf("%d", k);
	return k;
}

int main() {
	char a[9999];
	gets(a);
	fun(a);
	return 0;
}