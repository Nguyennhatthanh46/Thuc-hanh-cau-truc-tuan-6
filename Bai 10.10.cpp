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

void Xuat (DATHUC *a){
    int kt=0;
        for (int i=0 ; i<a->soluong ; i++){
        if (a->donthuc[i].heso==0) continue;
        if (a->donthuc[i].somu==0)
    {   if (a->donthuc[i].heso>0&&kt==1) cout <<"+"<<a->donthuc[i].heso;
        else cout <<a->donthuc[i].heso;
        kt=1;
        continue;
    }

      if (a->donthuc[i].somu==1)
            {if (a->donthuc[i].heso>0&&kt==1&&a->donthuc[i].heso!=1) cout <<"+"<<a->donthuc[i].heso<<"x";
            else if (a->donthuc[i].heso==1&&kt==1) cout <<"+x";
            else if  (kt==0&&a->donthuc[i].heso==1) cout<<"x";
            else if  (a->donthuc[i].heso==-1) cout<<"-x";
             else   cout <<a->donthuc[i].heso<<"x";
            kt=1;
            continue;}

    if (abs(a->donthuc[i].heso)==1){
        if (a->donthuc[i].heso==1&&kt==1)
        {cout <<"+x^"<<a->donthuc[i].somu;
        kt=1;}
        else if (a->donthuc[i].heso==-1)
            {cout<<"-x^"<<a->donthuc[i].somu;
        kt=1;}
        else {
            cout<<"x^"<<a->donthuc[i].somu;
        kt=1;
        }
        continue;
    }

    if (a->donthuc[i].heso>0)
    {   if (kt==0) cout <<a->donthuc[i].heso<<"x^"<<a->donthuc[i].somu;
    else cout <<"+"<<a->donthuc[i].heso<<"x^"<<a->donthuc[i].somu;
    kt=1;
    continue;
   }
   if (a->donthuc[i].heso<0)
    {cout <<a->donthuc[i].heso<<"x^"<<a->donthuc[i].somu;
    kt=1;
    continue;
   }
   }
if (kt==0) cout <<"0";
}

DATHUC* Tong2DaThuc(DATHUC *a , DATHUC *b){
    DATHUC *c= new DATHUC;
int tam=0, j=0 , i=0;
    while (j<b->soluong&&i<a->soluong){
        if (a->donthuc[i].somu==b->donthuc[j].somu)
        {
            c->donthuc[tam].somu=a->donthuc[i].somu;
            c->donthuc[tam].heso=a->donthuc[i].heso + b->donthuc[j].heso;
            j++;
            i++;
        }
        else if (a->donthuc[i].somu<b->donthuc[j].somu)
        {
            c->donthuc[tam]=b->donthuc[j];
            j++;
        }
        else if (a->donthuc[i].somu>b->donthuc[j].somu)
        {
            c->donthuc[tam]=a->donthuc[i];
            i++;

        }
        tam++;
    }
    while (i < a->soluong)
    {
        c->donthuc[tam]=a->donthuc[i];
        i++;
        tam++;
    }
    while (j < b->soluong)
    {
        c->donthuc[tam]=b->donthuc[j];
        j++;
        tam++;
    }

  c->soluong=tam;
  return c;

}

int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}
