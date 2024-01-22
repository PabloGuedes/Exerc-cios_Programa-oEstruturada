#include <iostream>
#include <locale>
#include <locale>

using namespace std;

int fatorial(int n){
    if(n == 1 || n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Informe um número: ";
    cin >> n;

    cout << endl << "O fatorial de " << n << " é: " << fatorial(n);
    return 0;
}
