#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, idade;
    char nome[50];

    ofstream arq1;

    cout << "Informe a quantidade de pessoas: ";
    cin >> n;

    arq1.open("pessoas.txt");

    for(int contador; contador < n; contador++){
        arq1 << cout << "Informe o nome: " << endl;
        cin >> nome;
        arq1 << cout << "Informe a idade: ";
        cin >> idade;
    }

    arq1.close();

    return 0;
}
