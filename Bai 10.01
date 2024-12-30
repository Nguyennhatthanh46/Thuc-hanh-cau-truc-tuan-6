#include <iostream>
#include <cmath>
using namespace std;
#define MAXN 100
struct PhanSo {
int tuso;
int mauso;
};
int ucln(int a, int b){
while(b!=0){
    int c = b;
    b=a%b;
    a=c;
}return abs(a);
}
void Nhap(PhanSo a[MAXN], int &n){
cin>>n;
for(int i = 0;i<n;i++){
    cin>>a[i].tuso>>a[i].mauso;
}
}
void Xuat(PhanSo a[MAXN], int n){
for(int i = 0;i<n;i++){
    if(a[i].mauso==0){
        cout<<"Khong thoa yeu cau bai toan"<<endl;
        continue;
    }
    int u = ucln(a[i].tuso, a[i].mauso);
    a[i].tuso/=u;
    a[i].mauso/=u;
    if(a[i].mauso<0){
        a[i].mauso=-a[i].mauso;
        a[i].tuso=-a[i].tuso;
    }
    if (abs(a[i].tuso) % abs(a[i].mauso) == 0) {
    cout<<a[i].tuso/a[i].mauso<<endl;
}else cout<<a[i].tuso<<"/"<<a[i].mauso<<endl;
}
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}
