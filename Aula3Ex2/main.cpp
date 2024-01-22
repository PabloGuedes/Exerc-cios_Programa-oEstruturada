#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    float n1, n2, n3, media;

    cout << "Digite o nome do aluno: ";
    cin >> nome;

    cout << endl << "Digite a nota 1 do aluno: ";
    cin >> n1;
    cout << "Digite a nota 2 do aluno: ";
    cin >> n2;
    cout << "Digite a nota 3 do aluno: ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << endl << "Aluno " << nome << " possui média: " << media;

    return 0;
}
