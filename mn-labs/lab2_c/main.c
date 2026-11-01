#include <stdio.h>
#include <math.h>

int main()
{
	int num;

	printf("Доброго дня. \n Програма перевіряє всі натуральні числа в діапазоні від 1 до введеного Вами числа і визначає чи є вони простими, чи ні \n");
	
	printf("Введіть Ваше число: ");
	scanf("%d", num);

	if(num <2 ) {
		printf("число лох");
	}

	return 0;
}
