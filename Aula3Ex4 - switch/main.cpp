#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opc;

    cout << "Digite 1 para Prato do dia!" << endl;
    cout << "Digite 2 para Lasanha!" << endl;
    cout << "Digite 3 para Picanha grelhada!" << endl;
    cout << "Digite 4 para Salada simples!" << endl;
    cin >> opc;

    switch(opc){
        case 1:
            cout << "Prato do dia: 17.00 reais. \n";
        break;
        case 2:
            cout << "Lasanha: 17.00 reais. \n";
        break;
        case 3:
            cout << "Picanha grelhada: 21.90 reais. \n";
        break;
        case 4:
            cout << "Salada simples: 7.90 reais. \n";
        break;
        default:
            cout << "Opção inválida! \n";
    }
    return 0;
}
