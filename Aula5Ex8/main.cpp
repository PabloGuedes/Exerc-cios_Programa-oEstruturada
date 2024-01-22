#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char texto[] = "Este exemplo busca por um determinado caracter dentre de uma string.";
    char *ptr;

    cout << "Procurando por 's' no texto: " << texto << endl << endl;
    ptr=strrchr(texto,'s');

    if(*ptr){
        cout << "A letra s apareceu a última vez na posição: " << ptr - texto + 1;
    } else {
        cout << "Letra não encontrada no texto.";
    }

    return 0;
}
