#include <bits/stdc++.h>
using namespace std;

class DATE
{
    int d;
    int m;
    int y;

    public:
        void Nhap();
        void Xuat();
};

void DATE::Nhap()
{
    cout << "Nhap Ngay: ";
    cin >> d;

    cout << "Nhap Thang: ";
    cin >> m;

    cout << "Nhap Nam: ";
    cin >> y;
}

void DATE::Xuat()
{
    string str1 = to_string(this->d) + "/" + to_string(this->m) + "/" + to_string(this->y);
    cout << str1;
}

int count = 1;

class NHANSU
{
    int maNhanSu;
    char hoTen[30];
    DATE ns;

    public:
        void Nhap();
        void Xuat();
        friend void indexingMaNhanSu(NHANSU *array1, int n);
};

void NHANSU::Nhap()
{
    cout << "Nhap Ho Ten: ";
    fflush(stdin);
    gets(this->hoTen);

    ns.Nhap();
}

void NHANSU::Xuat()
{
    cout << setw(15) << left << this->maNhanSu
         << setw(30) << left << this->hoTen
         << setw(20) << left; ns.Xuat();
    cout << endl;
}

void indexingMaNhanSu(NHANSU *array1, int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        array1[i].maNhanSu = i + 1;
    }
}

int main()
{
    NHANSU *array1;
    int n;

    cout << "Nhap So Luong: ";
    cin >> n;

    array1 = new NHANSU[n];

    indexingMaNhanSu(array1, n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << "Nhap Thong Tin Nhan Su Thu " << i + 1 << ": " << endl;
        array1[i].Nhap();
    }

    cout << setw(15) << left << "MA NHAN SU"
         << setw(30) << left << "HO TEN"
         << setw(20) << left << "NGAY SINH" 
         << endl;

    for(int i = 0 ; i < n ; i++)
    {
        array1[i].Xuat();
    }

    return 0;
}