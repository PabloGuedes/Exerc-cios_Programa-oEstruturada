#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct EstruturaFuncionario{
        char nome[50];
        char sexo[50];
        char setor[50];
        int idade;
        double altura;
        double salario;
    } strFuncionario[2];

    for(int i = 0; i < 2; i++){
        cout << "Informe o nome do funcion�rio: ";
        cin.getline(strFuncionario[i].nome,50);

        cout << "Informe o sexo do funcion�rio: ";
        cin.getline(strFuncionario[i].sexo,50);

        cout << "Informe o setor do funcion�rio: ";
        cin.getline(strFuncionario[i].setor,50);

        cout << "Informe a idade do funcion�rio: ";
        cin >> strFuncionario[i].idade;

        cout << "Informe a altura do funcion�rio: ";
        cin >> strFuncionario[i].altura;

        cout << "Informe o sal�rio do funcion�rio: ";
        cin >> strFuncionario[i].salario;
        getwchar();
        cout << endl;
    }

    cout << "\nFuncion�rios cadastrados com sucesso!\n\n";
    for(int i = 0; i < 2; i++){
        cout << endl << "Nome: " << strFuncionario[i].nome << endl;
        cout << "Sexo: " << strFuncionario[i].sexo << endl;
        cout << "Setor: " << strFuncionario[i].setor << endl;
        cout << "Idade: " << strFuncionario[i].idade << endl;
        cout << "Altura: " << strFuncionario[i].altura << endl;
        cout << "Sal�rio: " << strFuncionario[i].salario << endl;
    }

    return 0;
}
