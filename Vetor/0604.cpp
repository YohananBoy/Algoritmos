#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

main()
{
 const int n = 4;
 int i;
 int vetor1[n], vetor2[n];

 int vetorDobro[n * 2];

 cout << "Insira os valores para o vetor 1.\n";
 for (i = 0; i < n; i++)
    cin >> vetor1[i];

 cout << "Insira os valores para o vetor 2.\n";
 for (i = 0; i < n; i++)
    cin >> vetor2[i];


 for(i = 0; i < n; i++)
 {
    vetorDobro[2 * i] = vetor1[i];
    vetorDobro[2 * i + 1] = vetor2[i];
 }

 for(i = 0; i < n * 2; i++)
 {
     cout << vetorDobro[i] <<"\n";
 }

}



