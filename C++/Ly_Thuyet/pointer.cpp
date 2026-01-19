#include <bits/stdc++.h>
using namespace std;

// pass by reference : truyen tham chieu
void tang2(int *n){
    ++(*n);
}

void tang1(int &n){
    ++n;
}

int main(){
    // pointer :
    // + cấp phát động : cho danh sách liên kết đơn đôi
    // + Đơn thuần là 1 cái biến tuy nhiên thay vì lưu giá trị thì nó sẽ lưu địa chỉ ô nhớ của biến mà nó được trỏ vào
    int a = 100;
    int *ptr = &a;

    cout << "Dia chi cua bien a : " << &a << endl;
    cout << "Gia tri cua bien a : " << a << endl;
    cout << "Dia chi cua bien ptr : " << ptr << endl;
    cout << "Gia tri cua bien ma con tro ptr dang tro toi : " << *ptr << endl;
    
    *ptr = 200;

    cout << "Dia chi cua bien a : " << &a << endl;
    cout << "Gia tri cua bien a : " << a << endl;
    cout << "Dia chi cua bien ptr : " << ptr << endl;
    cout << "Gia tri cua bien ma con tro ptr dang tro toi : " << *ptr << endl;
    tang1(a);
    cout << a << endl;
    tang2(&a);
    cout << a << endl;

    // + pointer có mối quan hệ trực tiếp với mảng;
    // mảng a khi được khai báo thì sẽ được kết nối các ô nhớ liên tiếp
    int b[5] = {1, 2, 3, 4 , 5};
    for(int i = 0 ; i < 5; ++i){
        cout << &b[i] << endl;
    }

    // giá trị của biến b chính là 1 hằng con trỏ :
    cout << "gia tri cua bien b : " << b << endl;

    for(int i = 0 ; i < 0 ; ++i){
        cin >> *(b + i);
    }

    for(int i = 0 ; i < 5 ; ++i){
        cout << *(b + i) << " ";
    }

    // khi nắm được địa chỉ mảng, có thể sử dụng biến c như tên mảng
    int *c = b;

    for(int i = 0 ; i < 5 ; ++i){
        cout << c[i] << endl;
    }

    //int a[1000000] // cấp phát tĩnh : max : 10^6 , cấp phát bởi bộ nhớ stack
    // và 1000000 ptu này phải có 1000000 ô nhớ liên tiếp nhau
    int *d = new int[10000000]; // 1 mảng có 1 tỷ phần tử trong bộ nhớ heap
    // không cần các ô nhớ liên tiếp nhau vì vậy có thể lưu được số lượng lớn
    // sử dụng mảng a như 1 mảng bình thường;
    int n; cin >> n;
    for(int i = 0; i < n ; ++i){
        cin >> d[i];
    }

    for(int i = 0 ; i < n ; ++i){
        cout << d[i] << " ";
    }
    // thu hoi vung nho da cap phat
    delete []d;
}