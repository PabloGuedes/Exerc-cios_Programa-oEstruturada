#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[20];

    cout << "Exemplo que substitui caracter de uma palavra." << endl;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "Substituindo " << strset(palavra, '*');

    return 0;
}
