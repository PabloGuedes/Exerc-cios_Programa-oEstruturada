#include <iostream>
#include <locale>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string linha;

    ifstream arq_leitura("nomes.txt");
    if(arq_leitura.is_open()){

    while(! arq_leitura.eof()){
        getline(arq_leitura, linha);
        cout << linha << endl;
    }
    arq_leitura.close();
    }
    else{
        cout << "ERRO: arquivo não foi aberto ou não existe.";
    }

    return 0;
}
