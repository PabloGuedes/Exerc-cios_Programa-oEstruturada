#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

double conversao(double fahrenheit){
    double celsius;

    celsius = (fahrenheit - 32) * (5.0/9.0);

    return celsius;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    double f;

    cout << "Informe um valor em graus Fahrenheit: ";
    cin >> f;

    cout << endl << setprecision(2) << "O valor correspondente em graus Celsius é: " << conversao(f) << "°C";

    return 0;
}
