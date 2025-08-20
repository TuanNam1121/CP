#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ;i < n ; i++){
        cin >> a[i];
    }

    int value ; cin >> value;
    int h , l ; h = l = 0;
    for(int i : a){
        if(i > value) h++;
        else if(i < value) l++;
    }

    cout << l << endl << h;
}