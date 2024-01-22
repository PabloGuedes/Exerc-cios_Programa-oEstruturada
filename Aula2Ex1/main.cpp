#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, soma, sub, div, mul;
    int resto, n4, n5;

    cout << "Digite o número 1: ";
    cin >> n1;
    cout << "Digite o número 2: ";
    cin >> n2;
    cout << "Digite o número 3: ";
    cin >> n3;
    cout << "Digite o número 4: ";
    cin >> n4;
    cout << "Digite o número 5: ";
    cin >> n5;

    soma = n1 + n2;
    cout << "A soma do número 1 e do número 2 é: " << soma << endl;

    sub = n3 - n1;
    cout << "A subtração do número 3 pelo número 1 é: " << sub << endl;

    div = n2 / n1;
    cout << "A divisão do número 2 pelo número 1 é: " << div << endl;

    mul = n1 * n2;
    cout << "A multiplicação do número 1 pelo número 2 é: " << mul << endl;

    resto = n4 % n5;
    cout << "O resto da divisão do número 4 pelo número 5 é: " << resto << endl;

    return 0;
}
