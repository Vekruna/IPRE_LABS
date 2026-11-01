#include <stdio.h>
#include <stdlib.h>
#include <cstring>
int main()
{
	int Gnum = rand() % 100;
	int vgadav;
	int guess = 0;
	char stop[35];
	printf("Я загадав число від 1 до 100. Вгадай число \n");
	
	do {
		printf("Число: ");
		scanf("%d", &vgadav);
		if (vgadav < Gnum) {
			printf("Більше \n");
			guess++;
		}

		if (strcmp(stop, "stop")== 0) {
			printf("LOX");
			return 0;
		}

		else if (vgadav > Gnum) {
			printf("Menshe \n");
			guess++;	
		}
		else {
			printf("Вгадав!! %d\n", guess);
		}
	} while (vgadav != Gnum);	
	
	return 0;
}
