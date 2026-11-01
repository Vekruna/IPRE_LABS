#include <iostream>
#include <string>
//  #include <cmath>
using namespace std;

int main()
{	
	string name;
	string surename;
	string adresa;
	int hb;
	int rhb;
	
	cout << "Введіть як Ваше ім'я: ";
	cin >> name;
	
	cout <<	"Введіть Ваше прізвище: ";
	cin >> surename;

	cout << "Введіть Вашу адресу проживання: ";
	cin.ignore();
	getline(cin, adresa);
	
	cout << "Введіть Ваш рік нардження: ";
	cin >> hb;
	
	rhb = 2026-hb;
	
	cout << "Дякую! Ви ввели наступну інформацію: " << name << " " << surename << endl;
	cout << "Вік: " << rhb << endl;
	cout << "......................................................" << endl;
	cout << adresa << endl;
	 
}
