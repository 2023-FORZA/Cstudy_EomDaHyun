//백준 2547
#include <stdio.h>
#define ll long long

int main() {
	int t;
	scanf("%d", &t);

	while (t--) {
		ll student, total = 0, candy;
		scanf("%lld", &student);

		for (int i = 0; i < student; i++) {
			scanf("%lld", &candy);
			total = (total + candy) % student;
		}

		if (total % student)
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;
}