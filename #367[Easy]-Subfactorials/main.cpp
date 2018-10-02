#include <iostream>
using namespace std;

int derangement(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 0;
    }
    return (n - 1) * (derangement(n - 1) + derangement(n - 2));
}

int main()
{
    cout << "!6 -> " << derangement(6) << endl;
    cout << "!9 -> " << derangement(9) << endl;
    cout << "!14 -> " << derangement(14) << endl;
}
