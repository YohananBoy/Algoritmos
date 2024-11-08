#include <iostream>
using namespace std;

int main()
{
    int NL = 4, NC = 4;
    int i, j;
    int matriz1 [NL] [NC];
    int soma = 0;
    int k = 0;
    
    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            cin >>matriz1[i][j];
        }
        cout << "\n";
    }

for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
           if (k == 0 or k % 5 == 0)
           {
               soma += matriz1[i][j];
           }
            k++;
        }
    }
    cout << soma;

}