#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;

    cout << "Ol�, vamos conversar." << endl;
    // Pergunta 1
    cout << "Qual � o seu nome?  ";
    getline(cin, nome);
    cout << endl << "Nossa, " << nome << ", que nome feio.";

    return 0;
}
