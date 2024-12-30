#include <iostream>
using namespace std;

struct PhanSo{
int tuso;
int mauso;
};
void Nhap(PhanSo &a){
cin>>a.tuso>>a.mauso;
if (a.mauso < 0) {
        a.mauso = -a.mauso;
        a.tuso= -a.tuso;
    }
}
PhanSo Nhap(){
PhanSo b;
cin>>b.tuso>>b.mauso;
if (b.mauso < 0) {
        b.mauso = -b.mauso;
        b.tuso= -b.tuso;
    }
return b;
}
int SoSanh(PhanSo a, PhanSo b){
if(b.mauso==0||a.mauso==0){
    return 0;
}
int x = a.tuso*b.mauso - b.tuso*a.mauso;
return x;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
