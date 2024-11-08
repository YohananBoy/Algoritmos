#include <iostream>
#include <math.h>

using namespace std;

int gyrozepelli (int n)
{
    int i = 0;
    int x = 0;
    int y = 0;
    int z = 1;

    while (i < n)
    {
        x = y + z;
        z = y;
        y = x;
        i = i + 1;
    }

    return x;
}

main ()
{
    int num;
    cin >> num;
    cout << gyrozepelli (num);
}
