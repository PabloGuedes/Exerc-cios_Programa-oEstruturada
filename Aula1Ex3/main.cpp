#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, soma, media;

    cout << "Informe o n�mero 1: ";
    cin >> n1;
    cout << "Informe o n�mero 2: ";
    cin >> n2;
    cout << "Informe o n�mero 3: ";
    cin >> n3;

    soma = n1 + n2 + n3;
    media = soma / 3;

    cout << "A soma �: " << soma << "\n";
    cout << "A m�dia �: " << media;

    return 0;
}
