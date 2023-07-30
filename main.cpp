#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // Inicjalizacja generatora liczb losowych na podstawie czasu

    int secretNumber = rand() % 100 + 1; // Losowanie liczby z zakresu 1-100
    int guess;
    int attempts = 0;

    cout << "Witaj w grze zgadywanie liczby!" << endl;

    do
    {
        cout << "Podaj swoją propozycję: ";
        cin >> guess;

        attempts++;

        if (guess == secretNumber)
        {
            cout << "Gratulacje! Zgadłeś liczbę " << secretNumber << " po " << attempts << " próbach." << endl;
            break;
        }
        else if (guess < secretNumber)
        {
            cout << "Podana liczba jest za mała. Spróbuj ponownie." << endl;
        }
        else
        {
            cout << "Podana liczba jest za duża. Spróbuj ponownie." << endl;
        }
    } while (true);

    return 0;
}
