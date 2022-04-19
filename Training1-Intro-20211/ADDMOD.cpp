#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long a, b;
    const int MOD = 1000000007;
    cin >> a >> b;
    int res = (a % MOD + b % MOD) % MOD;
    cout << res;
    return 0;
}
