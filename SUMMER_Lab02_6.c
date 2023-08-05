//백준 10820
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char input[101] = { 0, };
int n1 = 0, n2 = 0, n3 = 0, n4 = 0;

void count() {
	for (int j = 0; j < strlen(input);j++) {
		if (input[j] == 32) {
			n4++;
		}
		else if (input[j] >=48 && input[j] <= 57) {
			n3++;
		}
		else if (input[j] >= 65 && input[j] <= 90) {
			n2++;
		}
		else if (input[j] >= 97 && input[j] <= 122) {
			n1++;
		}
	}
}
int main() {
	while(scanf("%[^\n]s", &input) != EOF) {
		getchar();
		count();
		printf("%d %d %d %d\n", n1, n2, n3, n4);
		n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	}


	return 0;
}