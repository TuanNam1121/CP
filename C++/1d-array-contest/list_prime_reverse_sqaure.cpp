#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool primef(int n){
    if(n < 2) return false;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool reversef(int n){
    int temp = n, rev = 0;
    while(temp > 0){
        rev *= 10;
        rev += temp % 10;
        temp /= 10;
    }
    return rev == n;
}


bool squaref(int n){
    int s =  (int)(sqrt(n));
    return s * s == n;
}

bool prime_sumf(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return primef(sum);
}


int main(){
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int prime, reverse, square, prime_sum;
    prime = reverse = square = prime_sum = 0;
    for(int i = 0 ; i < n ; i++){
        if(primef(a[i])) prime++;
        if(reversef(a[i])) reverse++;
        if(squaref(a[i])) square++;
        if(prime_sumf(a[i])) prime_sum++;
    }
    cout << prime << endl << reverse << endl << square << endl << prime_sum;
    
}