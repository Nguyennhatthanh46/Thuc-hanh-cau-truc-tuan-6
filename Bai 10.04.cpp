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
int ucln(int a, int b){
while(b!=0){
    int c = b;
    b=a%b;
    a=c;
}return abs(a);
}

void rutgon(PhanSo &pso){
int x=ucln(pso.tuso, pso.mauso);
pso.tuso/=x;
pso.mauso/=x;
if(pso.mauso<0){
    pso.tuso=-pso.tuso;
    pso.mauso=-pso.mauso;
}
}

PhanSo Chia(PhanSo a, PhanSo b){
PhanSo tong;
tong.tuso =a.tuso*b.mauso;
tong.mauso=a.mauso*b.tuso;
rutgon(tong);
return tong;
}
void Xuat(PhanSo tong){
if(tong.mauso==1){
    cout<<tong.tuso<<endl;
}else cout<<tong.tuso<<"/"<<tong.mauso<<endl;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Chia(a, b));
    return 0;
}
