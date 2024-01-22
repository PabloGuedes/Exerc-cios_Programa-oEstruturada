#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, soma, media;

    cout << "Informe o número 1: ";
    cin >> n1;
    cout << "Informe o número 2: ";
    cin >> n2;
    cout << "Informe o número 3: ";
    cin >> n3;

    soma = n1 + n2 + n3;
    media = soma / 3;

    cout << "A soma é: " << soma << "\n";
    cout << "A média é: " << media;

    return 0;
}
