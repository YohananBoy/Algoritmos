#include <iostream>
using namespace std;

int main()
{
    int NL = 2, NC = 3;
    int i, j;
    int matriz1 [NL] [NC];
    int matriz2 [NL] [NC];
    int soma = 0;
    int media = NL * NC;
    
    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            matriz1[i][j] = j;
        }
    }
    
    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            matriz2[i][j] = j;
        }
    }
    
    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            soma += matriz1[i][j] + matriz2[i][j];
        }
    }
    
    soma = soma / media;
    cout << soma;

}