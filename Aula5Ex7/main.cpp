#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char texto[] = "Este exemplo busca por um determinado caracter dentre uma string.";
    char *ptr;

    cout << "Procurando por 's' no texto: " << texto << endl << endl;
    ptr=strchr(texto,'r');

    if(*ptr){
        cout << "A letra s apareceu a primeira vez na posição: " << ptr - texto + 1;
    } else {
        cout << "Letra não encontrada no texto.";
    }

    return 0;
}
