#include <iostream>
#include <string.h>
using namespace std;

void maiusculando(char txt1[])
{
    int i, j;

    for(i = 0; txt1[i] != '\0'; i++)
    {
        if (txt1[i] >= 97 and txt1[i] <= 122)
            txt1[i] -= 32;
    }
}

int main()
{
    char txt1[40], txt2[40], txt3[80];
    strcpy(txt1, "yoHanan");
    strcpy(txt2, "Sturti");
    
    maiusculando(txt1);

    cout << txt1; 

   
}

