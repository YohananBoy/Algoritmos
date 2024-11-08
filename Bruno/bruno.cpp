#include <iostream>
#include <math.h>

using namespace std;

void jurosCompostos (float &d, float &c)
{
    float m;
    int n;

    for (n = 0;d >= m; n++)
    {
        m = c * pow((1 + 0.02),n);
    }

    d = m;
    c = n;
}

main()
{
    float d, c;
    cout << "Insira o valor da divida:\n";
    cin >> d;
    cout << "Insira o valor do capital inicial:\n";
    cin >> c;

    if (d > 0 && c > 0)
    {
        jurosCompostos(d, c);
        cout << "O montante final sera " << d << " em " << c << " meses.";
    }
    else return -1;

}
