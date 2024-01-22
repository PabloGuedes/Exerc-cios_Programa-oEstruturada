#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra1[20], palavra2[20];

    cout << "Digite a palavra 1: ";
    cin >> palavra1;
    cout << "Digite a palavra 2: ";
    cin >> palavra2;

    if(strcmp(palavra1, palavra2)==0){
        cout << endl << "As palavras são iguais.";
    }
    else{
        cout << endl << "As palavras são diferentes.";
    }

    return 0;
}
