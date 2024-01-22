#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra1[20], palavra2[20];

    cout << "Digite a palavra 1: ";
    cin >> palavra1;
    cout << "Digite a palavra 2: ";
    cin >> palavra2;

    cout << endl << "Unindo Palavra 1 e Palavra 2 temos: " << strcat(palavra1, palavra2) << endl;

    return 0;
}
