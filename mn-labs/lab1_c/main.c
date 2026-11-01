#include <stdio.h>
#include <math.h>

int main()
{
	float shirina;
	float visota;
	float zapas_diametru;

	printf("Доброго дня. Програма допоможе порахувати розмір отвору, який необхідний для вільного проходження в ньому прямокутної деталі \n");

	printf("Введіть ширину: ");
	scanf("%f", &shirina);

	printf("Введіть висоту: ");
	scanf("%f", &visota);
	
	printf("Введіть запас діаметру: ");
	scanf("%f", &zapas_diametru);

	float result = sqrt(shirina*shirina + visota*visota);
	float nareshti = result*(1+zapas_diametru / 100);
	
	printf("Діаметри: %f", result, "\n");
	printf("Надлишок: %f", nareshti, "\n");
}
