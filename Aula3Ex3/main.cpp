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
            cout << endl << nome << ", sua categoria �: Infantil A";
        }
        else if((idade >= 8) && (idade <= 10)){
            cout << endl << nome << ", sua categoria �: Infantil B";
        }
        else if((idade >= 11) && (idade <= 13)){
            cout << endl << nome << ", sua categoria �: Juvenil A";
        }
        else if((idade >= 14) && (idade <= 17)){
            cout << endl << nome << ", sua categoria �: Juvenil B";
        }
        else if(idade >= 18){
            cout << endl << nome << ", sua categoria �: Adulto";
        }
    }
    else
        cout << "Idade inv�lida!";

    return 0;
}
