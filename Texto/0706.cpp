#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char tabela[128];
    int i;
    
    for(i = 0; i < 128; i++)
    {
        tabela[i] = i;
    }
    
    for(i = 0; i < 128; i++)
    {
        cout << i << " " << tabela[i] << "\n";
    }
}

