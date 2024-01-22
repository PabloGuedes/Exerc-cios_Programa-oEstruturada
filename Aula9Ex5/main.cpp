#include <iostream>
#include <locale>

using namespace std;

void troca(int &x, int &y){
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    cout << "Entre dois números: " << endl;
    cin >> a >> b;
    cout << "Você entrou com " << a << " e " << b << endl;
    troca(a, b);
    cout << "Trocados, eles são " << a << " e " << b << endl;

    return 0;
}
