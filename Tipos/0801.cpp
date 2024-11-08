#include <iostream>
#include <stdio.h>

using namespace std;

enum TSexo {masculino, feminino};
enum TEstadoCivil {solteiro, casado, viuvo, separado, desquitado};

struct TInformacao {
    enum TSexo sexo;
    enum TEstadoCivil estadoCivil;
};

int main()
{
    int i;
    struct TInformacao info;
    cout << "Qual seu sexo? (0 -> masculino | 1 -> feminino)\n";
    cin >> i;
    
    switch(i)
    {
        case 0: info.sexo = masculino;
        break;
        case 1: info.sexo = feminino;
        break;
        default: return -1;
    }
    
    cout << "Qual seu estado civil? (0 -> solteiro | 1 -> casado | 2 -> viuvo | 3 -> separado | 4 -> desquitado )\n";
    cin >> i;
    
    switch(i)
    {
        case 0: info.estadoCivil = solteiro;
        break;
        case 1: info.estadoCivil = casado;
        break;
        case 2: info.estadoCivil = viuvo;
        break;
        case 3: info.estadoCivil = separado;
        break;
        case 4: info.estadoCivil = desquitado;
        break;
        default: return -1;
    }
    
    cout << "Voce e do sexo ";
    
    switch(info.sexo)
    {
        case 0: cout << "masculino";
        break;
        case 1: cout << "feminino";
        break;
    }
    
    cout << " e seu estado civil e ";
    
    switch(i)
    {
        case 0: cout <<  "solteiro";
        break;
        case 1: cout << "casado";
        break;
        case 2: cout << "viuvo";
        break;
        case 3: cout << "separado";
        break;
        case 4: cout << "desquitado";
        break;
    }
}