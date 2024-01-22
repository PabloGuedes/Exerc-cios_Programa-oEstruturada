#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 100, soma;
    for(i; i<=200; i++){
        if(i%2==0){
            soma = soma + i;
        }
    }
    cout << "A soma dos números pares contidos no intervalo de 100 e 200 é de: "<< soma;
    return 0;
}
