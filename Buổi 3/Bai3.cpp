#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep;

class Date
{
    int day;
    int month;
    int year;

    public:
        void Nhap();
        void Xuat();
};

void Date::Nhap()
{
    cout << "Nhap Ngay: ";
    cin >> day;
    cout << "Nhap Thang: ";
    cin >> month;
    cout << "Nhap Nam: ";
    cin >> year;
}

void Date::Xuat()
{
    cout << day << "/" << month << "/" << year << endl;
}

class DiaChi
{
    char dienThoai[12];
    char phuong[30];
    char quan[30];
    char thanhPho[30];

    public:
        friend class DoanhNghiep;
};

class DoanhNghiep
{
    int maDn;
    char tenDn[60];
    Date ngayTl;
    DiaChi diaChi;
    char giamDoc[30];
    long doanhThu;

    public:
        void Nhap();
        void Xuat();
};

void DoanhNghiep::Nhap()
{
    cout << "Nhap Ma Doanh Nghiep: ";
    cin >> maDn;

    cout << "Nhap Ten Doanh Nghiep: ";
    fflush(stdin);
    gets(tenDn);

    cout << "Nhap Ngay Thanh Lap: " << endl;
    ngayTl.Nhap();
    
    cout << "Nhap Dien Thoai: ";
    fflush(stdin);
    gets(diaChi.dienThoai);

    cout << "Nhap Phuong: ";
    fflush(stdin);
    gets(diaChi.phuong);

    cout << "Nhap Quan: ";
    fflush(stdin);
    gets(diaChi.quan);

    cout << "Nhap Thanh Pho: ";
    fflush(stdin);
    gets(diaChi.thanhPho);

    cout << "Nhap Giam Doc: ";
    fflush(stdin);
    gets(giamDoc);

    cout << "Nhap Doanh Thu: ";
    cin >> doanhThu;
}

void DoanhNghiep::Xuat()
{
    cout << "Ma Doanh Nghiep: " << maDn << endl;
    cout << "Ten Doanh Nghiep: " << tenDn << endl;
    cout << "Nhap Ngay Thanh Lap: "; ngayTl.Nhap();
    cout << "Nhap Dien Thoai: " << diaChi.dienThoai << endl;
    cout << "Nhap Phuong: " << diaChi.phuong << endl;
    cout << "Nhap Quan: " << diaChi.quan << endl;
    cout << "Nhap Thanh Pho: " << diaChi.thanhPho << endl;
    cout << "Nhap Giam Doc: " << giamDoc << endl;
    cout << "Nhap Doanh Thu: " << doanhThu << endl;
}

int main()
{
    DoanhNghiep A;

    cout << "Nhap Doanh Nghiep A: " << endl;
    A.Nhap();

    cout << "Doanh Nghiep A: " << endl;
    A.Xuat();
    return 0;
}