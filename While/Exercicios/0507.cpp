#include <iostream>
#include <math.h>

using namespace std;

main()
{
    float chico = 1.50;
    float ze = 1.10;
    int ano;

    for(ano = 0; ze < chico; ano++)
    {
        chico += 0.02;
        ze += 0.03;
    }

    cout << "em " << ano << " anos ze fica maior que chico." << "\naltura do chico: " << chico << ". altura do ze: " << ze;

}

