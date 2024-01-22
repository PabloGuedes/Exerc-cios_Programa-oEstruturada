#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[20];

    cout << "Este um exemplo inverte uma palavra." << endl;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    cout << "A palavra " << palavra; cout << " invertida fica: " << strrev(palavra);

    return 0;
}
