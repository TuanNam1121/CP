#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << a[0] << " ";   
    for (int i = 1 ; i < n; i++){
        bool dup = false;
        for(int j = i - 1 ; j >= 0 ; j--){
            if(a[i] == a[j]){
                dup = true;
                break;
            }
        }
        if(!dup) cout << a[i] << " ";
    }
}