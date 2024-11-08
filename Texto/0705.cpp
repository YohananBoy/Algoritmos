#include <iostream>
#include <string.h>
using namespace std;

void minusculando(char txt1[])
{
    int i, j;

    for(i = 0; txt1[i] != '\0'; i++)
    {
        if (txt1[i] >= 65 and txt1[i] <= 90)
            txt1[i] += 32;
    }
}

int main()
{
    char txt1[40], txt2[40], txt3[80];
    strcpy(txt1, "YOHaNAN");
    strcpy(txt2, "Sturti");
    
    minusculando(txt2);

    cout << txt2; 

   
}

