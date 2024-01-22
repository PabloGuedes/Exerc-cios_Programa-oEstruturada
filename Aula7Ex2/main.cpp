#include <iostream>
#include <locale>

// Elabore um algoritmo que receba números e os
// armazene em uma matriz M x M. Imprima a
// matriz sem os números da diagonal principal.

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int linha = 5, coluna = 5;
    int matriz[linha][coluna];

    for(int contador = 0; contador < linha; contador++){
        for(int cont = 0; cont < coluna; cont++){
            cout << "Informe o número " << contador << " | " << cont << ": ";
            cin >> matriz[contador][cont];
        }
        cout << endl;
    }

    for(int contador = 0; contador < linha; contador++){
        for(int cont = 0; cont < coluna; cont++){
            if(contador == cont)
                cout << matriz[contador][cont];
            cout << "\t";
        }
        cout << endl;
    }

    return 0;
}
