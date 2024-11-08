#include <iostream>
using namespace std;

int main()
{
    int NL = 2, NC = 3;
    int i, j;
    int matriz1 [NL] [NC];
    int matriz2 [NL] [NC];
    int matriz3 [NL] [NC];
    
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
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            cout << matriz3 [i] [j] << "\n";
        }
        
        cout << "\n";
    }
}