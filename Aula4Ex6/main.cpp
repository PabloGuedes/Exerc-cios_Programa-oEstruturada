#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    for(i = 10; i >= 1; i--)
    cout << setw(9) << i << setw(9) << "X 6 = " << setw(9) << i*6 << endl;
    return 0;
}
