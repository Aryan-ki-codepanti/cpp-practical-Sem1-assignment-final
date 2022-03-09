#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int main()
{
    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;

    if (m < 1 || n < 1)
    {
        cout << "Enter valid numbers" << endl;
        exit(1);
    }

    cout << "GCD of " << m << " and " << n << " : " << gcd(m, n);
    return 0;
}