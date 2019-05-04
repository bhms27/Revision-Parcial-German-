#include <iostream>
using namespace std;

int main()
{
    int n = 12;
    int contador=0;
    while(n > 0)
    {   contador++;
        if( n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        cout << n << endl;
        cout << contador << endl;
    }

}
