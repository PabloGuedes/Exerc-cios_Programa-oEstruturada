#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[15];
    int idade;

    cout << "Informe o nome do nadador: ";
    cin >> nome;

    cout << endl << "Informe a idade do nadador: ";
    cin >> idade;

    if(idade >=5){

        if((idade >=5) && (idade <= 7)){
            cout << endl << nome << ", sua categoria é: Infantil A";
        }
        else if((idade >= 8) && (idade <= 10)){
            cout << endl << nome << ", sua categoria é: Infantil B";
        }
        else if((idade >= 11) && (idade <= 13)){
            cout << endl << nome << ", sua categoria é: Juvenil A";
        }
        else if((idade >= 14) && (idade <= 17)){
            cout << endl << nome << ", sua categoria é: Juvenil B";
        }
        else if(idade >= 18){
            cout << endl << nome << ", sua categoria é: Adulto";
        }
    }
    else
        cout << "Idade inválida!";

    return 0;
}
