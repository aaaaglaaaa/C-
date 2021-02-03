#include <stdio.h>
#include <string.h>

int main() {
	char m[51];
	int a = 0, b = 0, c = 0, i = 0;
	gets(m);
	while (m[i] != '\0') {
		if (m[i] == '(')
			a++;
		if (m[i] == ')')
			a--;
		if (m[i] == '{')
			b++;
		if (m[i] == '}')
			b--;
		if (m[i] == '[')
			c++;
		if (m[i] == ']')
			c--;
		i++;
	}
	if (a == 0 && b == 0 && c == 0)
		printf("yes");
	else
		printf("no");
	return 0;
}