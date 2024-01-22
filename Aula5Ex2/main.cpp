#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[20];

    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << endl << "A palavra tem " << strlen(palavra) << " letras." << endl;

    return 0;
}
