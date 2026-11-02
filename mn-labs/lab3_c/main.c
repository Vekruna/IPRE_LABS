#include <stdio.h>
#include <math.h>

void FUNCTION_FIRST(int a1, int a2, int b1, int b2, int c1, int c2) {
	if (a1 == a2) {
		printf("Error");
	}
	
	int x1 = (b2-b1)/(a1-a2); 
	int y1 = a1 * x1 + b1;	
	printf("Точка перетину: %d", x1, y1);
}

int main() {
	int choise;
	int a1;
	int a2;
	int b1;
	int b2;
	
	printf("Доброго дня. \n");
	printf("Програма визначає точку перетину двох кривих. \n");
	printf("Можливі два варіанти: \n");
	printf("1. Пошук перетину двох прямих: y1 = a1*x + b1; y2 = a2 * x + b2\n2. Пошук перетину параболи та прямої: y1 = a1 * x^2 + b1 * x + c1; y2 = a2 * x + b2 \nОберіть 1 або 2: ");

	scanf("%d", &choise);
	if (choise == 1) {
		printf("a1: ");
		scanf("%d", &a1);

		printf("a2: ");
		scanf("%d", &a2);

		printf("b1: ");
		scanf("%d%", &b1);

		printf("b2: ");
		scanf("%d", &b2);
		FUNCTION_FIRST(a1, a2, b1, b2);
	}
 	return 0;
}
