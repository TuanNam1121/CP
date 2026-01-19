#include <bits/stdc++.h>
using namespace std;

#define ll long long
// toán tử bit
// biểu diễn số ở dạng nhị phân :
// 10 : 1010
// có n bit thì có thể biểu diễn được 2^n số

// nếu số N = 2^k thì biểu diễn nhị phân có 1 và k số 0 đằng sau
// ví dụ : 2^5 : 100000

// 2^0 + 2^1 + 2^2 + ... + 2^k-1 = 2^k - 1

ll powMod(ll a, ll b, ll mod){
   ll res = 1;
   while(b > 0){
       if(b & 1){ // b & 1 sẽ tương đương check xem ở bit cuối (2^0) có phải là số 1 hay không thì sẽ tương đương với b % 2 == 1
           res *= a;
           res %= mod;
       }
       a *= a;
       a %= mod;
       b = b >> 1; // dịch phải 1 bit tương đương với /2
   }
   return res;
}

// sinh ra các tập con có n phần tử của 1 tập
void sinh(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n; ++i) cin >> a[i];
    
    // 3 : [7,8,9]

    for(int i = 0; i < pow(2, n); ++i){
        // i : dựa nào biểu diễn nhị phân của i để suy ra 1 cấu hình tập con tương ứng;
        // 000 : {};
        // 001 : {9};
        // 010 : {8};
        // 011 : {8,9};

        for(int j = 0; j < n; ++j){
            // duyệt bit
            if(i & (1 << j)){// 1 << j tương đương với dịch 1 sang k bit tương đương với 1 * 2^j
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }

    // O(n * 2^n)
}

void sinh2(){
    
}


int main(){
    unsigned int a = 23;  //  10111
    unsigned int b = 9;  //    1001

    // and : a&b
    unsigned int c = a&b; //  00001
    cout << c << endl;
    // or : a|b
    unsigned int d = a|b; //  11111
    cout << d << endl;
    // xor : a^b
    unsigned int e = a^b; //  11110
    cout << e << endl;
    // not : ~a
    unsigned int f = ~a;  //  01000
    cout << f << endl;

    // left shift dịch trái 1 bit  : << 
    // a << k == a * 2^k
    c = a << 1; // dịch trái 1 bit , nhân thêm 2
    cout << c << endl;
    c = a << 2; // dịch trái 2 bit , nhân thêm 4
    cout << c << endl;
    c = a << 3; // dịch trái 3 bit , nhân thêm 8;
    cout << c << endl;

    // right shift dịch phải 1 bit : >>
    // a >> k == a / 2^k
    c = a >> 1;
    cout << c << endl;
    c = a >> 2;
    cout << c << endl;

    // bài toán nổi tiếng với phép xor :
    // cho 1 mảng chỉ có duy nhất 1 ptu có số xuất hiện là lẻ còn lại là chẵn; tìm số đó
    // 1 1 2 2 3
    // xor hết cả array thì sẽ tìm ra số đó, vì nếu 2 số xor với nhau thì sẽ ra 0
    int x[] = {1, 2, 1 , 2, 3};
    int y = 0;
    
    for(int i = 0 ; i < 5 ; ++i){
        y ^= x[i];
    }

    // b & 1 sẽ tương đương với b % 2 == 1
    // một số tài liệu sẽ code b & 1 thay cho b % 2 == 1
    cout << y;

    sinh();
    
}