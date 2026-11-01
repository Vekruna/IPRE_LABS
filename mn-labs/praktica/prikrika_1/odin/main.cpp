#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string surname;
    string patronymic;
    string address;

    cout << "Ім'я: ";
    getline(cin, name);

    cout << "Прізвище: ";
    getline(cin, surname);

    cout << "По батькові: ";
    getline(cin, patronymic);

    cout << "Адреса: ";
    getline(cin, address);

    cout << "Ім'я: " << name << "\n";
    cout << "Прізвище: " << surname << "\n";
    cout << "По батькові: " << patronymic << "\n";
    cout << "--------------------\n";
    cout << "Адреса: " << address << "\n";

    return 0;
}
