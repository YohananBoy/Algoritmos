#include <iostream>
using namespace std;

int main()
{
    int NL = 2, NC = 3;
    int i, j;
    int matriz1 [NL] [NC];
    int transposta [NC] [NL];
    
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
            transposta[j][i] = matriz1[i][j];
        }
    }
    
    for (i = 0; i < NC; i++)
    {
        for (j = 0; j < NL; j++)
        {
            cout << transposta[i][j];
        }
        cout << "\n";
    }
    
}