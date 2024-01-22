#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeroDigitado, quantidadeNumero=0;

    do{
        cout << "Infome o número: ";
        cin >> numeroDigitado;
        quantidadeNumero ++;
    } while(numeroDigitado != 0);
    cout << "Acabou!" << endl;
    cout << "Foram digitados " << quantidadeNumero - 1 << " números.";
    return 0;
}
