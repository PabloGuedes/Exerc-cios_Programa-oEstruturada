#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float fahrenheit, celsius;

    cout << "Informe um valor em graus Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * (5.0/9.0);

    cout << "O valor correspondente em graus Celsius é: " << celsius;

    return 0;
}
