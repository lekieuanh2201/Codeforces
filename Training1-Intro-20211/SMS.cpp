#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
#include<iterator>
using namespace std;

string plus1 = {'b', 'e', 'h', 'k', 'n', 'q', 'u', 'x'};
string plus2 = {'c', 'f', 'i', 'l', 'o', 'r', 'v', 'y'};
string plus3 = {'s', 'z'};

bool checkExist(char e, string arr){
    bool exists = find(begin(arr), end(arr), e) != end(arr);
    if (exists) return true;
    else return false;
}
int numOfType(string sms){
    int cnt = sms.size();
    for (int i = 0; i < sms.size(); i++){
        if(checkExist(sms[i], plus1)){
            cnt += 1;
        }
        else if (checkExist(sms[i], plus2)){
            cnt += 2;
        }
        else if (checkExist(sms[i], plus3)){
            cnt += 3;
        }
    }
    return cnt;
}
int main(){
    int T;
    cin >> T;
    string sms;
    getline(cin,sms);
    for (int i = 0; i < T; i++){
        getline(cin, sms);
        cout << "Case #" << i+1 << ": "<<numOfType(sms)<<endl;
    }
    return 0;
}
