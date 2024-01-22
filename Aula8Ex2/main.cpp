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
        cout << "Informe o nome do funcionário: ";
        cin.getline(strFuncionario[i].nome,50);

        cout << "Informe o sexo do funcionário: ";
        cin.getline(strFuncionario[i].sexo,50);

        cout << "Informe o setor do funcionário: ";
        cin.getline(strFuncionario[i].setor,50);

        cout << "Informe a idade do funcionário: ";
        cin >> strFuncionario[i].idade;

        cout << "Informe a altura do funcionário: ";
        cin >> strFuncionario[i].altura;

        cout << "Informe o salário do funcionário: ";
        cin >> strFuncionario[i].salario;
        getwchar();
        cout << endl;
    }

    cout << "\nFuncionários cadastrados com sucesso!\n\n";
    for(int i = 0; i < 2; i++){
        cout << endl << "Nome: " << strFuncionario[i].nome << endl;
        cout << "Sexo: " << strFuncionario[i].sexo << endl;
        cout << "Setor: " << strFuncionario[i].setor << endl;
        cout << "Idade: " << strFuncionario[i].idade << endl;
        cout << "Altura: " << strFuncionario[i].altura << endl;
        cout << "Salário: " << strFuncionario[i].salario << endl;
    }

    return 0;
}
