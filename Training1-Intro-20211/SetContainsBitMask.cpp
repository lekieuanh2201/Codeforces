#include<bits/stdc++.h>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    int arrA[n];
    for (int i = 0; i < n ; i++){
        cin >> arrA[i];
    }
    cin >> m;
    int arrB[m];
    int cntBinA=0;
    for (int i = 0; i < m ; i++){
        cin >> arrB[i];
        bool exists = find(arrA, arrA+n, arrB[i]) != (arrA+n);
        if(exists){
            cntBinA += 1;
        }
    }
    if (cntBinA == m){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}
