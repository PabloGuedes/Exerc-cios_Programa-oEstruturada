#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador, idade, soma;
    char nome [20];
    contador = 1;
    while(contador < 5){}
        cout << "Digite o nome: ";
        cin >> nome;
        cout << "Digite a idade: ";
        cin >> idade;

        soma += idade;
    }

    cout << endl << "A soma das idades é de: " << soma;

    return 0;
}
