#include <bits/stdc++.h>
using namespace std;

class PHIEU;

class KIEMKE
{
    char ngayKiemKe[20];
    char tenKiemKe[30];
    char chucVu[30];

    public:
        void Nhap();
        void Xuat();
};

void KIEMKE::Nhap()
{
    cout << "Nhap Ngay Kiem Ke:"; 
    fflush(stdin);
    gets(ngayKiemKe);

    cout << "Nhap Ten Kiem Ke:"; 
    fflush(stdin);
    gets(tenKiemKe);

    cout << "Nhap Chuc Vu:"; 
    fflush(stdin);
    gets(chucVu);
}

void KIEMKE::Xuat()
{
    cout << "Ngay Kiem Ke: " << setw(20) << left << ngayKiemKe << endl;
    cout << "Ten Kiem Ke: " << setw(30) << left << tenKiemKe
         << "Chuc Vu: " << setw(30) << left << chucVu << endl;
}

class PHONG
{
    char maPhong[10];
    char tenPhong[30];
    char truongPhong[30];

    public:
        void Nhap();
        void Xuat();
};

void PHONG::Nhap()
{
    cout << "Nhap Ma Phong:"; 
    fflush(stdin);
    gets(maPhong);

    cout << "Nhap Ten Phong:"; 
    fflush(stdin);
    gets(tenPhong);

    cout << "Nhap Truong Phong:"; 
    fflush(stdin);
    gets(truongPhong);
}

void PHONG::Xuat()
{
    cout << "Kiem Ke Tai Phong: " << setw(30) << left << tenPhong
         << "Ma Phong: " << setw(10) << left << maPhong << endl;
    cout << "Truong Phong: " << truongPhong << endl;
}

class TAISAN
{
    char tenTaiSan[30];
    int soLuong;
    char tinhTrang[30];

    public:
        TAISAN();
        TAISAN(const char *tenTaiSan, int soLuong, const char *tinhTrang);
        void Nhap();
        void Xuat();
        friend class PHIEU;
        friend void BONUS1(PHIEU obj1);
        friend void BONUS3(PHIEU obj1);
};

TAISAN::TAISAN()
{
    strcpy(tenTaiSan, "");
    soLuong = 0;
    strcpy(tinhTrang, "");
}

TAISAN::TAISAN(const char *tenTaiSan, int soLuong, const char *tinhTrang)
{
    strcpy(this->tenTaiSan, tenTaiSan);
    this->soLuong = soLuong;
    strcpy(this->tinhTrang, tinhTrang);
}

void TAISAN::Nhap()
{
    cout << "Nhap Ten Tai San:"; 
    fflush(stdin);
    gets(tenTaiSan);

    cout << "Nhap So Luong: ";
    cin >> soLuong;

    cout << "Nhap Tinh Trang:"; 
    fflush(stdin);
    gets(tinhTrang);
}

void TAISAN::Xuat()
{
    cout << setw(30) << left << tenTaiSan
         << setw(15) << left << soLuong
         << setw(30) << left << tinhTrang << endl;
}

class PHIEU
{
    char maPhieu[10];
    KIEMKE kiemKe;
    PHONG phong;
    TAISAN *taiSan;
    int n;

    public:
        void Nhap();
        void Xuat();
        friend void BONUS1(PHIEU obj1);
        friend void BONUS2(PHIEU &obj1, TAISAN taiSan);
        friend void BONUS3(PHIEU obj1);
};

void PHIEU::Nhap()
{
    cout << "Nhap Ma Phieu:"; 
    fflush(stdin);
    gets(maPhieu);

    kiemKe.Nhap();
    phong.Nhap();

    cout << "Nhap So Luong Tai San: ";
    cin >> n;

    taiSan = new TAISAN[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout << "Nhap Tai San Thu " << i + 1 << ": " << endl;
        taiSan[i].Nhap();
    }
}

void PHIEU::Xuat()
{
    cout << "\t\tPHIEU KIEM KE TAI SAN" << endl;
    cout << "Ma Phieu: " << setw(10) << left << maPhieu;
    kiemKe.Xuat();
    phong.Xuat();

    cout << setw(30) << left << "TEN TAI SAN"
         << setw(15) << left << "SO LUONG"
         << setw(30) << left << "TINH TRANG" << endl;

    int TongSL = 0;

    for (int i = 0; i < n; i++)
    {
        taiSan[i].Xuat();
        TongSL += taiSan[i].soLuong;
    }
    
    cout << "So Tai San Da Kiem Ke: " << setw(15) << left << n 
         << "Tong So Luong: " << setw(15) << left << TongSL << endl;
}   

void BONUS1(PHIEU obj1)
{
    for (int i = 0; i < obj1.n; i++)
    {
        if(stricmp(obj1.taiSan[i].tenTaiSan, "May Vi Tinh") == 0)
        {
            obj1.taiSan[i].soLuong = 20;
        }
    }
}

void BONUS2(PHIEU &obj1, TAISAN taiSan1)
{
    obj1.taiSan = (TAISAN*)realloc(obj1.taiSan, (obj1.n + 1) * sizeof(TAISAN));
    
    for(int i = obj1.n ; i >= 2 ; i--)
    {
        obj1.taiSan[i] = obj1.taiSan[i - 1];
    }
    obj1.taiSan[1] = taiSan1;
    obj1.n++;
}

void BONUS3(PHIEU obj1)
{
    for(int i = 0 ; i < obj1.n - 1 ; i++)
    {
        for(int j = 0 ; j < obj1.n - i - 1 ; j++)
        {
            if(obj1.taiSan[j].soLuong > obj1.taiSan[j + 1].soLuong)
            {
                TAISAN temp = obj1.taiSan[j];
                obj1.taiSan[j] = obj1.taiSan[j + 1];
                obj1.taiSan[j + 1] = temp;
            }
        }
    }
}
int main()
{
    PHIEU obj1;
    obj1.Nhap();
    obj1.Xuat();

    BONUS1(obj1);
    cout << "SAU KHI THAY DOI: " << endl;
    obj1.Xuat();

    TAISAN taiSan1("Laptop", 10, "Tot");
    BONUS2(obj1, taiSan1);
    cout << "SAU KHI CHEN: " << endl;
    obj1.Xuat();

    BONUS3(obj1);
    cout << "SAU KHI SAP XEP: " << endl;
    obj1.Xuat();
    return 0;
}