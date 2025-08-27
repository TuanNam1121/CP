#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
           // pair<indexMax1, indexMax2> , pair< valueMax1, valueMax2>
    pair<pair<int,int>,pair<int, int>> pairMax, pairMin;
    pairMax = pairMin = {{0,0},{a[0], a[0]}};
    for(int i = 0 ; i < n ; i++){
        // Xac dinh 2 so lon nhat trong mang
        if(a[i] > pairMax.second.first){
            // Cap nhat index
            pairMax.first.second = pairMax.first.first;
            pairMax.first.first = i;
            // Cap nhat value
            pairMax.second.second = pairMax.second.first;
            pairMax.second.first = a[i];
        }
        else if(a[i] > pairMax.second.second){
             // Cap nhat index
            pairMax.first.second = i;
            // Cap nhat value
            pairMax.second.second = a[i];
        }

        if(a[i] <= pairMin.second.first){
            // Cap nhat index
            pairMin.first.second = pairMin.first.first;
            pairMin.first.first = i;
            // Cap nhat value
            pairMin.second.second = pairMin.second.first;
            pairMin.second.first = a[i];
        }
        else if(a[i] < pairMin.second.second){
             // Cap nhat index
            pairMin.first.second = i;
            // Cap nhat value
            pairMin.second.second = a[i];
        }
    }

    int maxSum = abs(pairMax.second.first + pairMax.second.second);
    int minSum = abs(pairMin.second.first + pairMin.second.second);
    int crossSum = abs(pairMax.second.first + pairMin.second.first);
    cout << max(max(maxSum, minSum),crossSum);


}