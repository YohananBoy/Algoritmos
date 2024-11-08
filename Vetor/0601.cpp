#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

main()
{
 const int n = 4;
 int i;
 int vetor1[n], vetor2[n];

 cout << "Insira os valores para o vetor 1.\n";
 for (i = 0; i < n; i++)
    cin >> vetor1[i];


 for(i = 0; i < n; i++)
 {
    vetor2[i] = vetor1[i];
 }

 for(i = 0; i < n; i++)
 {
     cout << "vetor 1: " <<vetor1[i] <<"\n" << "vetor 2: " << vetor2[i] << "\n";
 }

}
