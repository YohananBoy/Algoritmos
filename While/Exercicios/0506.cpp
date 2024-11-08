#include <iostream>
#include <math.h>

using namespace std;

main()
{
    float m;
    int tempo;

    cin >> m;

    for(tempo = 0; m > 0.05; tempo = tempo + 50)
    {
        m = m / 2;
    }

    cout << "A massa eh de: " << m << " gramas, o tempo necessario foi de: " << tempo << " segundos";
}
