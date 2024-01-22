#include <iostream>
#include <locale>
#define NALUNO 2
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoIngresso;
    } strAluno[NALUNO];

    for(int i = 0; i < NALUNO; i++){
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome,60);
        cout << "Informe a matrícula do aluno: ";
        cin.getline(strAluno[i].matricula,10);
        cout << "Informe o ano de ingresso do aluno: ";
        cin >> strAluno[i].anoIngresso;
        cout << endl;
        getchar();
    }
    cout << "\nAlunos Cadastrados com sucesso!\n\n";
    for(int i = 0; i < NALUNO; i++){
        cout << "Aluno: " << strAluno[i].nome << endl;
        cout << "Matrícula: " << strAluno[i].matricula << endl;
        cout << "Ano de Ingresso: " << strAluno[i].anoIngresso << endl;
    }

    return 0;
}
