#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, soma, sub, div, mul;
    int resto, n4, n5;

    cout << "Digite o n�mero 1: ";
    cin >> n1;
    cout << "Digite o n�mero 2: ";
    cin >> n2;
    cout << "Digite o n�mero 3: ";
    cin >> n3;
    cout << "Digite o n�mero 4: ";
    cin >> n4;
    cout << "Digite o n�mero 5: ";
    cin >> n5;

    soma = n1 + n2;
    cout << "A soma do n�mero 1 e do n�mero 2 �: " << soma << endl;

    sub = n3 - n1;
    cout << "A subtra��o do n�mero 3 pelo n�mero 1 �: " << sub << endl;

    div = n2 / n1;
    cout << "A divis�o do n�mero 2 pelo n�mero 1 �: " << div << endl;

    mul = n1 * n2;
    cout << "A multiplica��o do n�mero 1 pelo n�mero 2 �: " << mul << endl;

    resto = n4 % n5;
    cout << "O resto da divis�o do n�mero 4 pelo n�mero 5 �: " << resto << endl;

    return 0;
}
