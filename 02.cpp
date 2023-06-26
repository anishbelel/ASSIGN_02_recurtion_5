#include <iostream>
using namespace std;

int prime(int n, int p)
{
    if (p == 1)
        return 1;

    else if (n % (p) != 0)
        return prime(n, p - 1);
    cout << "The geratet number by which the given number is divisible is " << p << endl;
    cout << "The smallest number by which the given number is divisible is " << n / p << endl;
    return 0;
}

int main()
{
    int n;
    cout << "Enter the numeber ";
    cin >> n;
    int ans = prime(n, n - 1);
    if (ans == 1)
    {
        cout << "It is a prime number";
    }
    else
    {
        cout << "It is not a prime number";
    }

    return 0;
}