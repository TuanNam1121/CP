#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool enough(vector<int> a, int n){
    int p25, p50; p25 = p50 = 0;

    for(int i = 0 ; i < n ; i++){
        // tra 25 : p25++
        if(a[i] == 25) p25++;
        // tra 50 : p25--
        else if(a[i] == 50){
            if(p25 == 0) return false;
            p25--;
            p50++;
        }
        // tra 100 : if(p50 >= 2) p50 -= 2; if(p25 >= 4) p25 -= 4; if(p25 >= 2 && p25 == 1) p25 -= 2 va p50--
        else{
            if(p50 >= 2) p50 -= 2;
            else if(p25 >= 4) p25 -= 3;
            else if(p25 > 1 && p50 > 0){
                p25--;
                p50--;
            }
            else return false;
        }

    }
    return true;
}

int main(){
    int n ; cin >> n ;
    vector<int> a(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    if(enough(a, n)) cout << "YES";
    else cout << "NO";
}