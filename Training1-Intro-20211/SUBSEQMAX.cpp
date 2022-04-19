#include<bits/stdc++.h>
using namespace std;

void findMax(int *arr, int n){
    int best = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    cout << best;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    findMax(arr, n);
    return 0;
}
