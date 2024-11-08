#include <iostream>
#include <math.h>

using namespace std;

bool primo (int n)
{
    if (n <= 1)
    {
        return false;
    }
    int i = 2;
    while (i <= n/2)
    {
        if (n % i == 0)
        {
            return false;
        }

        i = i + 1;
    }

    return true;
}

main()
{
    int num;
    cout << "fala um numero negao\n";
    cin >> num;
    if (primo(num))
    {
        cout << num << " eh primo";
    }
    else
    {
        cout << num << " nao eh primo";
    }
}
