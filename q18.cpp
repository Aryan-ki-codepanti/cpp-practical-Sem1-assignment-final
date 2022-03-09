#include <iostream>
using namespace std;

int fib(int n){
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0){
        cout << "Number can not be negative" << endl;
        exit(1);
    }

    for (int i = 0; i <= n; i++)
        cout << fib(i) << " ";
    cout << endl;

    return 0;
}