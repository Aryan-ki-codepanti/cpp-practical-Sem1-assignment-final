#include <iostream>
using namespace std;

long long int factorial(long long int n){
    if (n <= 1)
        return 1;
    return n * factorial(n-1);
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
    cout << "Factorial of " << n << " : " << factorial(n) << endl;
    return 0;
}