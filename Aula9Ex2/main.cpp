#include <iostream>
#include <locale>

using namespace std;

void cumprimenta(char inic1, char inic2)
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Ol�, " << inic1 << inic2 << "!" << endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char primeiro, segundo;

    cout << "Entre com duas iniciais (sem separa��o): " << endl;
    cin >> primeiro >> segundo;
    cumprimenta(primeiro, segundo);

}
