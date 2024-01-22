#include <iostream>
#include <locale>

using namespace std;

void oi(void)
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Oi, esse é o primeiro exemplo de definição de FUNÇÃO em C++." << endl;
    cout << "Ainda veremos outros exemplos." << endl << endl;
}

int main()
{
    int i;
    i = 1;
    while (i <= 5)
    {
        oi();
        i = i + 1;
    }
}
