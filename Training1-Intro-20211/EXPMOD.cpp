#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int modPrimePow(unsigned long long a, unsigned long long b, int p)
{
    long res = 1;
    a %= p;
    b %= p - 1;
    while (b > 0)
    {
        if (b % 2 > 0)
            res = res * a % p;
        a = a * a % p;
        b /= 2;
    }
    return (int) res;
}

int main()
{
    unsigned long long a;
    unsigned long long b;
    int  m = 1000000007;
    cin >> a >> b;
    cout << modPrimePow(a, b, m);
    return 0;
}
