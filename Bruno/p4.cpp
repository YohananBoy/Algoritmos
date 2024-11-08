#include <iostream>
#include <math.h>

using namespace std;

int eduardo (int a, int b)
{
    int d1, d2, d3 = 1.0;
    d1 = a;
    d2 = b;

    for (;d2 != 0;)
    {
        d3 = d1 % d2;
        d2 = d1;
        d1 = d3;
    }

    return d2;
}

main()
{
    int a, b;
    cout << "vamos calcular mdc uhu!!" << "\n";
    cout << "forneca dois numeros:\n";
    cin >> a >> b;
    cout << "o mdc desses numeros eh: " << eduardo (a,b);
}
