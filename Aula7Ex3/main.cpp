#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int linha = 5, coluna = 5;
    int matriz1[linha][coluna];
    int matriz2[linha][coluna];
    int matriz3[5][5];

    cout << "Matriz 1:" << endl;
    for(int contador = 0; contador < linha; contador++){
        for(int cont = 0; cont < coluna; cont++){
            cout << "Informe o número " << contador << " | " << cont << ": ";
            cin >> matriz1[contador][cont];
        }
        cout << endl;
    }

    cout << "Matriz 2:" << endl;
    for(int contador = 0; contador < linha; contador++){
        for(int cont = 0; cont < coluna; cont++){
            cout << "Informe o número " << contador << " | " << cont << ": ";
            cin >> matriz2[contador][cont];
        }
        cout << endl;
    }

    cout << "Matriz 1 + Matriz 2:" << endl;
    for(int contador = 0; contador < linha; contador++){
        for(int cont = 0; cont < coluna; cont++){
            matriz3[contador][cont] = matriz1[contador][cont] + matriz2[contador][cont];
            cout << matriz3[contador][cont];
            cout << "\t";
        }
        cout << endl;
    }


    return 0;
}
