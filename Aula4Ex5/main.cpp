#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeroDigitado, quantidadeNumero=0;

    do{
        cout << "Infome o n�mero: ";
        cin >> numeroDigitado;
        quantidadeNumero ++;
    } while(numeroDigitado != 0);
    cout << "Acabou!" << endl;
    cout << "Foram digitados " << quantidadeNumero - 1 << " n�meros.";
    return 0;
}
