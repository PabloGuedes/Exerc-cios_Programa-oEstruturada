#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;
    bool resultado;

    cout << "Digite o n�mero 1: ";
    cin >> n1;
    cout << "Digite o n�mero 2: ";
    cin >> n2;
    cout << "Digite o n�mero 3: ";
    cin >> n3;

    resultado = n1 > n2;
    cout << "O resultado da opera��o: n�mero 1 � maior que o n�mero 2, �: " << resultado << endl;

    resultado = n2 == n3;
    cout << "O resultado da opera��o: n�mero 2 � igual ao n�mero 3, �: " << resultado << endl;

    resultado = n3 != n1;
    cout << "O resultado da opera��o: n�mero 3 � diferente do n�mero 1 �: " << resultado << endl;
    return 0;
}
