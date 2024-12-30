
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void Nhap(char hoTenCanXoa[100]){
cin.getline(hoTenCanXoa,100);
}
void Nhap(SinhVien A[MAXN], int &n){
cin>>n;
cin.ignore();
for(int i = 0;i<n;i++){
cin.getline(A[i].MASV,10);
cin.getline(A[i].HoTen,100);
cin.getline(A[i].NgaySinh,12);
cin>>A[i].GioiTinh;
cin>>A[i].DiemToan>>A[i].DiemLy>>A[i].DiemHoa;
A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3;
cin.ignore();
}
}

void XoaTheoHoTen(SinhVien A[], int &n, char hoTenCanXoa[100]){
	for(int i=0; i<n;i++)
	{
		if (strcmp(A[i].HoTen,hoTenCanXoa)==0)
		{
			for(int j=i;j<n-1;j++)
			{
				A[j]=A[j+1];
			}
			i--;
			n--;
		}
	}
}

void Xuat(SinhVien A[], int n){
   for(int i=0;i<n;i++){
    cout<<A[i].MASV<<"\t";
    cout<<A[i].HoTen<<"\t";
    cout<<A[i].NgaySinh<<"\t";
    cout<<A[i].GioiTinh<<"\t";
    cout<<setprecision(3)<<A[i].DiemToan<<"\t";
    cout<<setprecision(3)<<A[i].DiemLy<<"\t";
    cout<<setprecision(3)<<A[i].DiemHoa<<"\t";
    cout<<setprecision(3)<<A[i].DTB<<endl;
    }
}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
