#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void shorten(string str){
    int len = str.size();
    if (len > 10){
        str = str[0] + to_string(len-2) + str[len-1];
    }
    cout << str <<endl;
}

int main(){
    int n;
    cin >> n;
    string str;
    getline(cin, str);
    for (int i = 0; i < n ; i++){
        getline(cin, str);
        shorten(str);
    }
    return 0;
}
