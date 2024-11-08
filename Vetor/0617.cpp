#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const int NL = 8, NC = 8;
    int mat[NL][NC];
    int k, i, j;
    
    for(i = 0; i < NL; i++)
    {
        for(j = 0; j < NC; j++)
        {
            mat[i][j] = 0;
        }
    }
    
    cout << "TABULEIRO VAZIO:\n";
    
    for(i = 0; i < NL; i++)
    {
        for(j = 0; j < NC; j++)
        {
            cout << mat[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    int n1, n2;
    
    cout << "Insira a posicao do cavalo:\n";
    cout << "Linha: ";
    cin >> n1;
    cout << "Coluna: ";
    cin >> n2;
    
    mat[n1][n2] = 1;
    
    cout << "TABULEIRO COM CAVALO:\n";
    
    for(i = 0; i < NL; i++)
    {
        for(j = 0; j < NC; j++)
        {
            cout << mat[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    int n3, n4;
    cout << "Insira a posicao do inimigo:\n";
    cout << "Linha: ";
    cin >> n3;
    cout << "Coluna: ";
    cin >> n4;
    
    mat[n3][n4] = 2;
    
    cout << "TABULEIRO COMPLETO:\n";
    
    for(i = 0; i < NL; i++)
    {
        for(j = 0; j < NC; j++)
        {
            cout << mat[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    for(i = 0; i < NL; i++)
    {
        for(j = 0; j < NC; j++)
        {
            if ((n1 + 2 == n3 and n2 + 1 == n4) or (n1 + 1 == n3 and n2 + 2 == n4) or (n1 - 2 == n3 and n2 - 1 == n4) or (n1 - 1 == n3 and n2 - 2 == n4))
                k++;
        }
    }
    
    cout << "\n";
    
    if (k == 0)
        cout << "Nao matou";
    else cout << "Matou";
    
    
}