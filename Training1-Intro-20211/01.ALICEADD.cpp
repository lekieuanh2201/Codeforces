#include<bits/stdc++.h>

using namespace std;

typedef string bigNum;

void input (bigNum &num){
    cin >> num;
}
void output (bigNum num){
    cout << num;
}
void equalLen (bigNum &a, bigNum &b){
    while (a.size() < b.size()){
        a = '0' + a;
    }
    while (a.size() > b.size()){
        b = '0' + b;
    }
}
bigNum add (bigNum a, bigNum b){
    equalLen(a, b);
    int carry = 0;
    bigNum result;
    for (int i = a.size() - 1; i >= 0; i--){
        int res = (a[i] - '0') + (b[i] - '0') + carry;
        carry = res / 10;
        result = (char)(res % 10 + '0') + result;
    }
    if (carry){
        result = '1' + result;
    }
    return result;
}

int main(){
    bigNum a, b, res;
    input(a); input(b);
    res = add (a, b);
    output(res);
    return 0;
}