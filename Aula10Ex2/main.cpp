#include <iostream>
#include <locale>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ofstream arq1;

    arq1.open("nomes.txt", ios::app);
    if(arq1.is_open()){
        arq1 << "Pedro" << endl;
        arq1 << "Carlos" << endl;
        arq1.close();
    }
    else{
        cout << "ERRO: arquivo não foi aberto ou não existe.";
    }
    return 0;
}

