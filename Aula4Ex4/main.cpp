#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cont = 1, num;

    cout << "Informe um n�mero: ";
    cin >> num;
    cout << "Os 10 antecessores de " << num << " s�o: " << endl;

    do{
        cout << num - cont << endl;
        cont = cont + 1;
    } while(cont <= 10);

    return 0;
}
