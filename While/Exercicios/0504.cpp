#include <iostream>
#include <math.h>

using namespace std;

int fatorial (int n)
{
    int i = 1;
    int resultado = 1;

    while (i <= n)
    {
        resultado = resultado * i;
        i = i + 1;
    }

    return resultado;
}

main ()
{
    int num;
    cin >> num;
    cout << fatorial (num);

}
