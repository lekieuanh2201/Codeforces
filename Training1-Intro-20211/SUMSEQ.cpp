#include<bits/stdc++.h>
using namespace std;

int main(){
    const int MOD = 1000000007;
    unsigned long long sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        sum += num % MOD;
    }
    sum = sum % MOD;
    cout << sum;
    return 0;
}
