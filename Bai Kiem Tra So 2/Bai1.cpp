#include <bits/stdc++.h>
using namespace std;

class NGUOI
{
    protected:
        char hoTen[30];
        int tuoi;
        char gioiTinh[5];
    
    public:
        void Nhap();
        void Xuat();
};

void NGUOI::Nhap()
{
    cout << "Nhap Ho Ten:"; 
    fflush(stdin);
    gets(hoTen);

    cout << "Nhap Tuoi: ";
    cin >> tuoi;

    cout << "Nhap Gioi Tinh:"; 
    fflush(stdin);
    gets(gioiTinh);
}

void NGUOI::Xuat()
{
    cout << setw(30) << left << hoTen
         << setw(10) << left << tuoi
         << setw(10) << left << gioiTinh;
}

class NHANVIEN : public NGUOI
{
    char maNV[15];
    char chucVu[50];
    float luong;

    public:
        void Nhap();
        void Xuat();
        friend void SuaLuong(CONGTY obj1);
        friend void Sapxep(CONGTY obj1)
};

void NHANVIEN::Nhap()
{
    NGUOI::Nhap();

    cout << "Nhap Ma Nhan Vien:"; 
    fflush(stdin);
    gets(maNV);

    cout << "Nhap Chuc Vu:"; 
    fflush(stdin);
    gets(chucVu);

    cout << "Nhap Luong: ";
    cin >> luong;
}

void NHANVIEN::Xuat()
{
    NGUOI::Xuat();

    cout << setw(15) << left << maNV 
         << setw(50) << left << chucVu
         << setw(15) << left << luong << endl; 
}

class CONGTY
{
    char maCT[15];
    char diaChi[50];
    NHANVIEN *array1;
    int n;

    public:
        void Nhap();
        void Xuat();
        friend void SuaLuong(CONGTY obj1);
        friend void Sapxep(CONGTY obj1);
};

void CONGTY::Nhap()
{
    cout << "Nhap Ma Cong Ty:"; 
    fflush(stdin);
    gets(maCT);

    cout << "Nhap Dia Chi:"; 
    fflush(stdin);
    gets(diaChi);

    cout << "Nhap So Luong: ";
    cin >> n;

    array1 = new NHANVIEN[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout << "Nhap Thong Tin Nhan Vien Thu " << i + 1 << ": " << endl;
        array1[i].Nhap();
    }
    
}

void CONGTY::Xuat()
{
    cout << "Ma Cong Ty: " << maCT << endl;
    cout << "Dia Chi: " << diaChi << endl;

    cout << setw(30) << left << "HO TEN"
         << setw(10) << left << "TUOI"
         << setw(10) << left << "GIOI TINH"
         << setw(15) << left << "MA NV"
         << setw(50) << left << "CHUC VU"
         << setw(15) << left << "LUONG" << endl;

    for(int i = 0 ; i < n ; i++)
    {
        array1[i].Xuat();
    }
}

void SuaLuong(CONGTY obj1)
{
    for(int i = 0 ; i < obj1.n ; i++)
    {
        if(obj1.array1[i].tuoi == 40 && stricmp(obj1.array1[i].chucVu, "ke toan") == 0)
        {
            obj1.array1[i].luong = 1000;
        }
    }
}

void Sapxep(CONGTY obj1)
{
    for(int i = 0 ; i < obj1.n - 1; i++)
    {
        for(int j = 0 ; j < obj1.n - i - 1 ; j++)
        {
            if(obj1.array1[j].luong > obj1.array1[j + 1].luong)
            {
                NHANVIEN temp = obj1.array1[j];
                obj1.array1[j] = obj1.array1[j + 1];
                obj1.array1[j + 1] = temp;
            }
        }
    }
}

int main()
{
    CONGTY obj1;
    obj1.Nhap();
    cout << "Ban Dau: " << endl;
    obj1.Xuat();

    cout << "Sau Khi Sua Luong: " << endl;
    SuaLuong(obj1);
    obj1.Xuat();

    cout << "Sau Khi Sap Xep: " << endl;
    Sapxep(obj1);
    obj1.Xuat();
    return 0;
}