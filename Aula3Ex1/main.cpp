#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsSaoPaulo, golsInter;

    cout << "\n*** Placar S�o Paulo x Internacional ***\n" << endl;

    cout << "Digite a quantidade de gols do S�o Paulo: ";
    cin >> golsSaoPaulo;

    cout << "\nDigite a quantidade de gols do Internacional: ";
    cin >> golsInter;

    if(golsSaoPaulo > golsInter){
        cout << "\nA festa � tricolor!\n";
        cout << endl << "Siga o l�der...";
    }
    else{
        cout << "N�o adianta tentar enganar o computador.";
        cout << endl << "Com certeza o S�o Paulo ganhou.";
    }

    return 0;
}
