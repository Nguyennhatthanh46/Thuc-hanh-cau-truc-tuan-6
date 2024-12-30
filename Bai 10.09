#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define MAXN 100
struct DONTHUC{
float heso;
int somu;
};
struct DATHUC{
DONTHUC donthuc[MAXN];
int soluong;
};
void Nhap(DONTHUC &a){
cin>>a.heso>>a.somu;
}
DATHUC* Nhap() {
DATHUC* A = new DATHUC();
cin>>A->soluong;
for(int i = 0;i<A->soluong;i++){
 Nhap(A->donthuc[i]);
}
return A;
}

void Xuat(const DATHUC& dt) {
    bool isFirst = true;
    for (int i = 0; i < dt.soluong; i++) {
        const auto& donThuc = dt.donthuc[i];

        if (donThuc.heso == 0) continue;

        if (!isFirst) {
            if (donThuc.heso > 0) cout << "+";
        } else {
            isFirst = false;
        }

        if (abs(donThuc.heso) != 1 || donThuc.somu == 0) {
            cout << donThuc.heso;
        } else if (donThuc.heso == -1) {
            cout << "-";
        }

        if (donThuc.somu > 0) {
            cout << "x";
            if (donThuc.somu > 1) {
                cout << "^" << donThuc.somu;
            }
        }
    }
    if (isFirst) cout << "0";
}

double TinhDaThuc(const DATHUC& dt, double x) {
    double ketQua = 0;
    for (int i = 0; i < dt.soluong; i++) {
        const auto& donThuc = dt.donthuc[i];
        ketQua += donThuc.heso * pow(x, donThuc.somu);
    }
    return ketQua;
}

int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}
