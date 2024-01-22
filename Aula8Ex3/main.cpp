#include <iostream>
#include <locale>

using namespace std;

int acheMaior(int a, int b, int c)
{
    setlocale(LC_ALL, "Portuguese");

    int maior;

    maior = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }

    return maior;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c, x, y, z, maior_1, maior_2;

    cout << "Digite o primeiro conjunto de três números inteiros: " << endl;
    cin >> a >> b >> c;

    maior_1 = acheMaior(a,b,c);

    cout << "Digite o segundo conjunto de três números inteiros: " << endl;
    cin >> x >> y >> z;

    maior_2 = acheMaior(x,y,z);

    cout << endl << "O resultado da soma é: ";
    cout << endl << maior_1 << " + " << maior_2 << " = " << maior_1 + maior_2 << endl;

}
