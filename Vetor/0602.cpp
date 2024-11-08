#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

main()
{
 const int n = 4;
 int i;
 int vetor1[n], vetor2[n];

 int somaVetor[n];

 cout << "Insira os valores para o vetor 1.\n";
 for (i = 0; i < n; i++)
    cin >> vetor1[i];

 cout << "Insira os valores para o vetor 2.\n";
 for (i = 0; i < n; i++)
    cin >> vetor2[i];


 for(i = 0; i < n; i++)
 {
    somaVetor[i] = vetor1[i] + vetor2[i];
 }

 for(i = 0; i < n; i++)
 {
     cout << "vetor 1: " <<vetor1[i] <<"\n" << "vetor 2: " << vetor2[i] << "\n";
     cout << "soma = " << somaVetor[i] <<"\n";
 }

}

