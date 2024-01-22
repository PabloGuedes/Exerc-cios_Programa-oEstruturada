#include <iostream>
#include <locale>

using namespace std;

int qu(int n)
{
    return n * n;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int s1, s2, s3;

    cout << "Entre tr�s inteiros: " << endl;
    cin >> s1 >> s2 >> s3;

    if(s1 > 0 && s2 > 0 && s3 > 0 &&
       (qu(s1) + qu(s2) == qu(s3) ||
        qu(s2) + qu(s3) == qu(s1) ||
        qu(s3) + qu(s1) == qu(s2)) )
    {
        cout << "" << s1 << ", " << s2 << " e " << s3
        << " podem formar uum tri�ngulo reto.\n";
    }
    else
    {
        cout << "" << s1 << ", " << s2 << " e " << s3
        << " n�o podem formar um tri�ngulo reto.\n";
    }
}
