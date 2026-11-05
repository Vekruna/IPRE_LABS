#include <stdio.h>
#include <math.h>

void FUNCTION_FIRST(int a1, int a2, int b1, int b2, int c1, int c2) {
	int x1 = (b2-b1)/(a1-a2); 
	int y1 = a1 * x1 + b1;	
	
	if (a1 == a2) {
		printf("Прямі паралельні. німа пеертну");
	}

	printf("Точка перетину: %d", x1, y1);
}

// void FUNC_DVA(int a11, int a22, int b11, int b22, int c11, int c22) {
//	int x2=(a11* pow(x, 2) + b11*x + c1);
//	int y11_p =(a11 * pow(x2, 2) + b11 + c11);
//	int y21_pr=(a22 * x2 + b2);
//	printf("Точка перетину параболи та прямої: %d"); 
// }

void parabola(int a21, int a22, int b21, int b22) {
	int D = pow(b21, 2) - 4 * a21 * 
}
int main() {
	int choise;
	int a1;
	int a2;
	int b1;
	int b2;
	int a21;
	int a22;
	int b21;
	int b22;
	
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
