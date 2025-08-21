#include <bits/stdc++.h>
using namespace std;
#define ll long long

string res(int even, int odd){
    if(even > odd) return "CHAN";
    else if(even < odd) return "LE";
    else return "CHANLE";
}

// max của 1 mảng là 1e7 + 1;

int main(){
    int a[(ll)1e7];
    int temp , count;
    count = 0;
    while(cin >> temp){
        a[count] = temp;
        count++;
    }
    int even , odd; even = odd = 0;
    for(int i : a){
        if(i % 2 == 0) even++;
        else odd++;
    }

    cout << res(even, odd);
    
}

// chua giai duoc vi van chua tim dc cach input test case while(cin >> temp)