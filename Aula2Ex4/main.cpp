#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome [20];
    float minutos, km, media;

    cout << "Informe seu nome: ";
    cin >> nome;

    cout << "Informe a quantidade de quil�metros percorridos: ";
    cin >> km;

    cout << "Informe o tempo gasto em minutos: " << endl;
    cin >> minutos;


    media = km/(minutos/60);

    cout << nome << ", voc� percorreu " << km << "km em " << minutos << " minutos." << endl;
    cout << "Sua velocidade m�dia foi de: " << media << "km/h";

    return 0;
}
