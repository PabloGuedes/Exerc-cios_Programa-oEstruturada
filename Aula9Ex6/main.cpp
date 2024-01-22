#include <iostream>
#include <locale>

using namespace std;

float capacidade(float, float, float);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float comp, larg, alt;

    cout << "Programa para calcular a capacidade de água de uma uma piscina: " << endl << endl;

    cout << "Digite o comprimento da piscina: ";
    cin >> comp;

    cout << "Digite a largura da piscina: ";
    cin >> larg;

    cout << "Digite a altura da piscina: ";
    cin >> alt;

    cout << endl << "A piscina possui: " << capacidade(comp, larg, alt) << " metros cúbicos.";

    return 0;
}

float capacidade (float comprimento, float largura, float altura){
    float resultado;
    resultado = comprimento * largura * altura;
    return resultado;
}
