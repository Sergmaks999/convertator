#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double DOLLAR_RATE = 92.86;
    const double EURO_RATE = 103.41;
    const double YUAN_RATE = 13.22;
    const double FARIT_RATE = 37.0;
    const double YEN_RATE = 0.64;
    const double COMMISSION_PERCENT = 5.0;

    while (true) 
    {
        double rubles, amount, commission;
        int choice;

        cout << "Введите количество рублей: ";
        cin >> rubles;
         
        cout << "Выберите валюту:" << endl;
        cout << "1. Доллар" << endl;
        cout << "2. Евро" << endl;
        cout << "3. Юань" << endl;
        cout << "4. Фарит" << endl;
        cout << "5. Йена" << endl;
        cout << "Введите номер валюты: ";
        cin >> choice;

        
        if (choice == 1) 
        {
            amount = rubles / DOLLAR_RATE;
        }
        else if (choice == 2) 
        {
            amount = rubles / EURO_RATE;
        }
        else if (choice == 3) 
        {
            amount = rubles / YUAN_RATE;
        }
        else if (choice == 4) 
        {
            amount = rubles / FARIT_RATE;
        }
        else if (choice == 5) 
        {
            amount = rubles / YEN_RATE;
        }
        else 
        {
            cout << "Неверный выбор валюты." << endl;
            continue;
        }

        
        commission = amount * (COMMISSION_PERCENT / 100);

        
        cout << "Полученная сумма: " << amount - commission << " ";

        if (choice == 1) 
        {
            cout << "долларов" << endl;
        }
        else if (choice == 2) 
        {
            cout << "евро" << endl;
        }
        else if (choice == 3) 
        {
            cout << "юаней" << endl;
        }
        else if (choice == 4) 
        {
            cout << "фаритов" << endl;
        }
        else 
        {
            cout << "йен" << endl;
        }

        cout << "Комиссия: " << commission << endl;

        
        cout << "Хотите повторить обмен? (1 - да, 0 - нет): ";
        cin >> choice;
        if (choice == 0) {
            break;
        }
    }

    return 0;
}