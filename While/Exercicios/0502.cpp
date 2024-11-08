#include <iostream>
#include <math.h>

using namespace std;

float EhAPotencia (int num, int exp)
{
    int resultado = 1;

    if (exp > 0)
    {
        for (int i = 1; i <= exp; i = i + 1)
        {
            resultado = resultado * num;
        }
    }
    else
    {
        for (int i = 0; i> exp; i = i -1)
        {
            resultado = resultado * num;
        }

        return 1.0/resultado;
    }

    return resultado;
}

main ()
{
    int n, e;
    cin >> n;
    cin >> e;
    cout << EhAPotencia(n, e);
}
