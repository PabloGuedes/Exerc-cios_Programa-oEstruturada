#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, m;

    cout << "Informe o valor de n: ";
    cin >> n;
    cout << "Informe o valor de m: ";
    cin >> m;

    if(n > m){
        while(n >= m){
            cout << "N�mero: " << m << endl;
            m++;
        } cout << "Acabou!" << endl;
    }
    else if(m > n){
        while(m >= n){
            cout << "N�mero: " << n << endl;
            n++;
        } cout << "Acabou!" << endl;
    }
    return 0;
}
