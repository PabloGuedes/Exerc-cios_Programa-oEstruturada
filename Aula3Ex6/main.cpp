#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int times;

    cout << "Digite 1 para S�o Paulo!" << endl;
    cout << "Digite 2 para Santos!" << endl;
    cout << "Digite 3 para Palmeiras!" << endl;
    cout << "Digite 4 para Corinthians!" << endl;
    cin >> times;

    switch(times){
        case 1:
            cout << endl << "Esse time � tricampe�o Mundial. \n";
        break;
        case 2:
            cout << endl << "A torcida desse time � a mais velha do Brasil. \n";
        break;
        case 3:
            cout << endl << "Esse time n�o tem Mundial. \n";
        break;
        case 4:
            cout << endl << "Esse time � ajudado pela arbitragem. \n";
        break;
        default:
            cout << "Op��o inv�lida! \n";
    }
    return 0;
}
