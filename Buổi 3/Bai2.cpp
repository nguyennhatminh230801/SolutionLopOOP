#include <bits/stdc++.h>
using namespace std;

class NSX
{
    char maNsx[10];
    char tenNsx[30];
    char dcNsx[30];

    public:
        void Nhap();
        void Xuat();
};

void NSX::Nhap()
{
    cout << "Nhap Ma Nha San Xuat: ";
    fflush(stdin);
    gets(maNsx);

    cout << "Nhap Ten Nha San Xuat: ";
    fflush(stdin);
    gets(tenNsx);

    cout << "Nhap Dia Chi Nha San Xuat: ";
    fflush(stdin);
    gets(dcNsx);
}

void NSX::Xuat()
{
    cout << setw(10) << left << maNsx
         << setw(30) << left << tenNsx
         << setw(30)<< left << dcNsx << endl;
}

class HANG
{
    char maHang[10];
    char tenHang[30];
    NSX x;

    public:
        void Nhap();
        void Xuat();
};

void HANG::Nhap()
{
    cout << "Nhap Ma Hang: ";
    fflush(stdin);
    gets(maHang);

    cout << "Nhap Ten Hang: ";
    fflush(stdin);
    gets(tenHang);

    x.Nhap();
}

void HANG::Xuat()
{
    cout << setw(10) << left << maHang 
         << setw(30) << left << tenHang;
    x.Xuat();
}

int main()
{
    HANG *array1;
    int n;

    cout << "Nhap So Luong Mat Hang: ";
    cin >> n;

    array1 = new HANG[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout << "Nhap Mat Hang Thu " << i + 1 << ": " << endl;
        array1[i].Nhap();
    }

    cout << setw(10) << left << "Ma Hang"
         << setw(30) << left << "Ten Hang"
         << setw(10) << left << "Ma NSX"
         << setw(30) << left << "Ten NSX"
         << setw(30)<< left << "Dia Chi" << endl;
    
    for(int i = 0 ; i < n ; i++)
    {
        array1[i].Xuat();
    }

    return 0;
}