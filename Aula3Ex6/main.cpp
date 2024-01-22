#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int times;

    cout << "Digite 1 para São Paulo!" << endl;
    cout << "Digite 2 para Santos!" << endl;
    cout << "Digite 3 para Palmeiras!" << endl;
    cout << "Digite 4 para Corinthians!" << endl;
    cin >> times;

    switch(times){
        case 1:
            cout << endl << "Esse time é tricampeão Mundial. \n";
        break;
        case 2:
            cout << endl << "A torcida desse time é a mais velha do Brasil. \n";
        break;
        case 3:
            cout << endl << "Esse time não tem Mundial. \n";
        break;
        case 4:
            cout << endl << "Esse time é ajudado pela arbitragem. \n";
        break;
        default:
            cout << "Opção inválida! \n";
    }
    return 0;
}
