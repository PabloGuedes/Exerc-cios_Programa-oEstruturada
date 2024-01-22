#include <iostream>
#include <locale>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ofstream arquivo;

    arquivo.open("arquivoFOR.txt");
    for(int i=0; i<=100;i++){
        arquivo << "Você está salvando dados de: " << i << endl;
        arquivo.close();
    }

    return 0;
}
