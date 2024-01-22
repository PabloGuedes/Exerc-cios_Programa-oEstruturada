#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade, n;

    cout << "Informe o número de pessoas: ";
    cin >> n;

    for(int i=0; i < n; i++){
        cout << "Informe o nome: ";
        cin >> nome;

        cout << "Informe a idade: ";
        cin >> idade;

        char pessoas[] = "pessoas.txt";
        ofstream saida(pessoas, ios::app);

        if(saida.is_open()){
            saida << nome << endl;
            saida << idade << endl;
            saida.close();
        }
    }
    return 0;
}
