#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsSaoPaulo, golsInter;

    cout << "\n*** Placar São Paulo x Internacional ***\n" << endl;

    cout << "Digite a quantidade de gols do São Paulo: ";
    cin >> golsSaoPaulo;

    cout << "\nDigite a quantidade de gols do Internacional: ";
    cin >> golsInter;

    if(golsSaoPaulo > golsInter){
        cout << "\nA festa é tricolor!\n";
        cout << endl << "Siga o líder...";
    }
    else{
        cout << "Não adianta tentar enganar o computador.";
        cout << endl << "Com certeza o São Paulo ganhou.";
    }

    return 0;
}
