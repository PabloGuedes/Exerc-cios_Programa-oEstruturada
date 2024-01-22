#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador = 1;
    while(contador <= 100){

        if(contador%10==0){
            cout << "Número = " << contador << endl;
        }
        contador += 1;
    }
    cout << "Acabou!" << endl;
    return 0;
}
