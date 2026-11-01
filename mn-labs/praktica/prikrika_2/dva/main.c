#include <stdio.h>

int main()
{
	for (int num = 1; num < 100; num++) {
		if (num % 2 == 0) {
			printf("parne %d\n", num);
		}
		else {
			printf("Neparne %d\n", num);
		}
	}
	return 0;
}
