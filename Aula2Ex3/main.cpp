#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;
    bool resultado;

    cout << "Digite o número 1: ";
    cin >> n1;
    cout << "Digite o número 2: ";
    cin >> n2;
    cout << "Digite o número 3: ";
    cin >> n3;

    resultado = n1 > n2;
    cout << "O resultado da operação: número 1 é maior que o número 2, é: " << resultado << endl;

    resultado = n2 == n3;
    cout << "O resultado da operação: número 2 é igual ao número 3, é: " << resultado << endl;

    resultado = n3 != n1;
    cout << "O resultado da operação: número 3 é diferente do número 1 é: " << resultado << endl;
    return 0;
}
