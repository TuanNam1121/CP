#include <bits/stdc++.h>
using namespace std;
#define ll long long

/* Độ phức tạp thuật toán :
- Cấu trúc dữ liệu : giúp lưu trữ các giá trị
- Giải thuật : giúp xử lý các bài toán
-> Cấu trúc dữ liệu và giải thuật phải đi kèm với nhau để giải quyết một bài toán được đưa ra

1. Độ phức tạp về thời gian (BigO Notation) :
- Giới hạn thời gian chạy là 1-2s
- 1s có thể thực hiện : 10^8
- Với những phương trình có độ phức tạp là O(n^3 + 2n^2 + 1) thì độ phức tạp sẽ như tìm lim tìm thằng tăng nhanh nhất -> O(n^3)

- O(1) : độ phức tạp hằng số 
+ Khi sử dụng các phép : gán , + - * / % , so sánh , lấy giá trị mảng từ index
+ là độ phức tạp không cần quan tâm đến Input

- O(n) 
+ Khi duyệt for hoặc while

- O(log n)
+ for while nhưng bước nhảy sẽ là phép * hoặc phép /
+ O(log2 n) hay O(log10 n) = O(log n)
 v*/

// O(căn n)
bool nt(int n){
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

// O(log10 n)
int digit(int n){
    int cnt = 0;
    while(n != 0){
        ++cnt;
        n /= 10;
    }
    return cnt;
}

// O(log2 n)
int toBin(ll n){
    int res = 0;
    while(n != 0){
        res += n % 10;
        n /= 2;
    }
    return res;
}


int main() {

    
    return 0;
}