#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k;cin >> n >> k;
    vector<ll> a(n);
    int mina = INT32_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == k){
            cout << 1;
            return 0;
        }
    }

    vector<ll> prefixSum(n);
    prefixSum[0] = a[0];
    
    for(int i = 1 ; i < n; i++){
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    for(int i = 0; i < n ; i++){
        if(prefixSum[i] == k) mina = i;
        else if(prefixSum[i] > k){
            int temp = prefixSum[i];
            int index = 0;
            while(temp > k){
                temp -= prefixSum[index];
                if(temp == k){
                    mina = min(mina, i - index); 
                }
                index++;
            }
        }

        cout << mina << " " << prefixSum[i] << endl;
    }

    if(mina == INT32_MAX) cout << -1;
    else cout << mina;

}