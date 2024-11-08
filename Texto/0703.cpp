#include <iostream>
#include <string.h>

using namespace std;

int comparando(char txt1[], char txt2[])
{
    int i, j = 0;
    
    for(i = 0; txt1[i] != '\0' and txt2[i] != '\0'; i++)
    {
        if(txt1[i] > txt2[i])
        {
            j++;
            return 1;
        }
        
        else if(txt1[i] < txt2[i])
        {
            j--;
            return -1;
        }
    }
    
    if(j == 0)
    {
        return 0;
    }

}

int main()
{
    char txt1[40], txt2[40], txt3[80];
    strcpy(txt1, "Yohanan");
    strcpy(txt2, "Sturti");

    

    if (comparando(txt1, txt2) == 0)
    {
        cout << "Iguais";
    }
    else if (comparando(txt1, txt2) > 0)
    {
        cout << "Txt1 > Txt2";
    }
    else cout << "Txt1 < Txt2";

    return 0;
}
