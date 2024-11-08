#include <iostream>
#include <string.h>
using namespace std;

void inverter(int vet[],int tam)
{
	int i, j;
	int maior = vet[0], menor = vet[0];
	int posmenor;
	int ordem[tam];

	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++) {
			if(vet[j] > maior)
			{
				maior = vet[j];
			}
			
			if(vet[j] < menor)
			{
				menor = vet[j];
				posmenor = j;
			}
		}
		vet[posmenor] = maior;
		ordem[i] = menor;
        menor = maior;
	}
	for (int i = 0; i < tam; i++) {
	    vet[i] = ordem[i];   
	}
}
int main()
{
	int vet[4] = {5,3,1,8};
	int i;


	inverter(vet, 4);

	for(i = 0; i < 4; i++)
	{
		cout << vet[i];
	}
}

