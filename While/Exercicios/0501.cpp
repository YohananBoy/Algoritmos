#include <iostream>
#include <math.h>

using namespace std;

int pabaixo (float n)
{
    int i = 1;

    if (n >= 0)
    {
        while (i <= n)
        {
                i = i + 1;
        }

        return i - 1;
    }
    else
    {
        i = -1;
        while (i >= n)
        {
                i = i - 1;
        }

        return i;
    }

}

int pacima (float n)
{
    int i = 1;

    if (n >= 0)
    {
        while (i <= n)
        {
                i = i + 1;
        }

        return i;
    }
    else
    {
        i = -1;
        while (i >= n)
        {
                i = i - 1;
        }

        return i + 1;
    }

}


main ()
{
    float num;
    cin >> num;
    cout << "o numero " << num << " arredondado pa baixo eh " << pabaixo(num) << "e com floor eh " << floor(num) << "\n";
    cout << "o numero " << num << " arredondado pa cima eh " << pacima(num) << "e com ceil eh " << ceil(num);
}
