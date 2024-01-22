#include <iostream>
#include <locale>

using namespace std;

int obtemValor(int x)
{
    if (x < 0){
        x = -x;
        return x;
    }
}

int main()
{
    int n;

    cout << "Entre com um valor: ";
    cin >> n;
    cout << "Valor positivo: " << n << " = " << obtemValor(n) << endl;
}
