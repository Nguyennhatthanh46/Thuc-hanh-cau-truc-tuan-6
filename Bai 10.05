#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void Nhap(SinhVien &A){
cin.getline(A.MASV,10);
cin.getline(A.HoTen,100);
cin.getline(A.NgaySinh,12);
cin>>A.GioiTinh;
cin>>A.DiemToan>>A.DiemLy>>A.DiemHoa;
A.DTB = (A.DiemToan + A.DiemLy + A.DiemHoa) / 3;
}
void Xuat(const SinhVien &A){
    cout<<A.MASV<<"\t";
    cout<<A.HoTen<<"\t";
    cout<<A.NgaySinh<<"\t";
    cout<<A.GioiTinh<<"\t";
    cout<<setprecision(3)<<A.DiemToan<<"\t";
    cout<<setprecision(3)<<A.DiemLy<<"\t";
    cout<<setprecision(3)<<A.DiemHoa<<"\t";
    cout<<setprecision(3)<<A.DTB<<endl;
}
int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
