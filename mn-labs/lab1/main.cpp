#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float shirina;
	float visota;
	float zapas_diametru;
	float d_min;
	float d_final;
	float protsent;

	cout << "Доброго дня. Програма допоможе порахувати розмір отвору, який необхідний для вільного проходження в ньому прямокутної деталі" << endl;
	
	cout << "Введіть ширину деталі: ";
	cin >> shirina;
	
	cout << "Введіть висоту деталі: ";
	cin >> visota;
	
	cout << "Введіть запас діаметру у відсотках: ";
	cin >> zapas_diametru;

	float result_diametr = sqrt(shirina * shirina +  visota * visota);
	float nareshti_final = result_diametr*(1+zapas_diametru / 100);
	
	cout << "Результати рахунку: " << endl;
	cout << "Діаметр: " << result_diametr << endl;
	cout << "Надлишкова: " << nareshti_final << endl;
	
}

