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
    cout << "Entre dois n�meros: " << endl;
    cin >> a >> b;
    cout << "Voc� entrou com " << a << " e " << b << endl;
    troca(a, b);
    cout << "Trocados, eles s�o " << a << " e " << b << endl;

    return 0;
}
