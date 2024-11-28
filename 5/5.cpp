#include <locale.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int sotr = 12;

    int sum = 0;


    int newsotr[sotr];
    int temp;
    for (int i = 0; i < sotr; i++)
    {
        cout << "Введите зп " << i+1 << " сотрудника за март : ";
        cin >> newsotr[i];
        cout << "Введите зп " << i+1 << " сотрудника за апрель : ";
        cin >> temp;
        newsotr[i] += temp;
        cout << "Введите зп " << i+1 << " сотрудника за май : ";
        cin >> temp;
        newsotr[i] += temp;
        cout << "Зп сотрудника за весь квартал: "<< newsotr[i] << " рублей." << endl;
        cout << endl;
    }

    for (int j = 0; j < sotr; j++)
    {
        sum += newsotr[j];
    }
    cout << "Сумма зп за весь квартал всех сотрудников составляет " << sum << " рублей." << endl;


}


