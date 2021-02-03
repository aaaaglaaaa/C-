#include <stdio.h>

int main() {
	char c[50];
	int i, a, s = 0, shuzi = 0, daxie = 0, xiaoxie = 0, qita = 0, t;
	scanf("%s", c);
	for (i = 0; i < 50; i++) {
		if (c[i] == '\0') {
			a = i;
			break;
		}
	}

	if (a < 1) {
		printf("0");
		return 0;
	} else {
		s = s + 1;
		if (a > 8)
			s = s + 1;
	}
	for (i = 0; i < a; i++) {
		if (c[i] >= 'A' && c[i] <= 'Z')
			daxie = 1;
		else if (c[i] >= 'a' && c[i] <= 'z')
			xiaoxie = 1;
		else if (c[i] >= '0' && c[i] <= '9')
			shuzi = 1;
		else
			qita = 1;
	}
	t = daxie + xiaoxie + shuzi + qita;
	if (t == 2)
		s = s + 1;
	else if (t == 3)
		s = s + 2;
	else if (t == 4)
		s = s + 3;
	printf("%d", s);
}