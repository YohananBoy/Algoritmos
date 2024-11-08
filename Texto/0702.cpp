#include <iostream>
#include <string.h>

using namespace std;

int contando(char txt1[])
{
    int i = 0;

    while(txt1[i] != '\0')
    {
        i++;
    }
    
    return i;
}

int main()
{
    char txt1[40], txt2[40], txt3[80];
    strcpy(txt1, "Yohanan");
    strcpy(txt2, "Sturti");

    

    cout <<contando(txt1);

    return 0;
}
