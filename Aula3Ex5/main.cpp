#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    float salario, irpf;

    cout << "Informe o nome: ";
    cin >> nome;

    cout << "Informe o salário: ";
    cin >> salario;

    if(salario < 2000){
        cout << nome << ", você está isento de pagar o IRPF.";
    }
    else if((salario >= 2000) && (salario < 3000)){
        irpf = (salario * 0.15) * 12;
        cout << nome << ", você tem que pagar R$" << irpf << " de IRPF ao ano.";
    }
    else if((salario >= 3000) && (salario < 5000)){
        irpf = (salario * 0.20) * 12;
        cout << nome << ", você tem que pagar R$" << irpf << " de IRPF ao ano.";
    }
    else if((salario >= 5000) && (salario < 10000)){
        irpf = (salario * 0.23) * 12;
        cout << nome << ", você tem que pagar R$" << irpf << " de IRPF ao ano.";
    }
    else if(salario >= 10000){
        irpf = (salario * 0.27) * 12;
        cout << nome << ", você tem que pagar R$" << irpf << " de IRPF ao ano.";
    }
    return 0;
}
