#include <bits/stdc++.h>
using namespace std;

class SINHVIEN
{
    char maSV[10];
    char tenSV[30];
    char ngaySinh[20];
    char gioiTinh[10];
    float diemTrungBinh;
    char xepLoaiDaoDuc[15];

    public:
        SINHVIEN();
        SINHVIEN(
            const char *maSV, 
            const char *tenSV,
            const char *ngaySinh,
            const char *gioiTinh,
            float diemTrungBinh,
            const char *xepLoaiDaoDuc
        );
        //~SINHVIEN();
        void setMaSV(const char *maSV);
        char* getMaSV();
        void setTenSV(const char *tenSV);
        char* getTenSV();
        void setNgaySinh(const char *ngaySinh);
        char* getNgaySinh();
        void setGioiTinh(const char *gioiTinh);
        char* getGioiTinh();
        void setDiemTrungBinh(float diemTrungBinh);
        float getDiemTrungBinh();
        void setXepLoaiDaoDuc(const char *xepLoaiDaoDuc);
        char* getXepLoaiDaoDuc();
        friend void InRaSVXepLoaiTot(SINHVIEN *array1, int n);
};

SINHVIEN::SINHVIEN()
{
    strcpy(maSV, "");
    strcpy(tenSV, "");
    strcpy(ngaySinh, "");
    strcpy(gioiTinh, "");
    diemTrungBinh = 0;
    strcpy(xepLoaiDaoDuc, "");
}

SINHVIEN::SINHVIEN(const char *maSV, const char *tenSV, const char *ngaySinh, const char *gioiTinh, float diemTrungBinh, const char *xepLoaiDaoDuc)
{
    strcpy(this->maSV, maSV);
    strcpy(this->tenSV, tenSV);
    strcpy(this->ngaySinh, ngaySinh);
    strcpy(this->gioiTinh, gioiTinh);
    this->diemTrungBinh = diemTrungBinh;
    strcpy(this->xepLoaiDaoDuc, xepLoaiDaoDuc);
}

// SINHVIEN::~SINHVIEN()
// {
//     strcpy(maSV, "");
//     strcpy(tenSV, "");
//     strcpy(ngaySinh, "");
//     strcpy(gioiTinh, "");
//     diemTrungBinh = 0;
//     strcpy(xepLoaiDaoDuc, "");
// }

void SINHVIEN::setMaSV(const char *maSV)
{
    strcpy(this->maSV, maSV);
}

char* SINHVIEN::getMaSV()
{
    return this->maSV;
}

void SINHVIEN::setTenSV(const char *tenSV)
{
    strcpy(this->tenSV, tenSV);
}

char* SINHVIEN::getTenSV()
{
    return this->tenSV;
}

void SINHVIEN::setNgaySinh(const char *ngaySinh)
{
    strcpy(this->ngaySinh, ngaySinh);
}

char* SINHVIEN::getNgaySinh()
{
    return this->ngaySinh;
}

void SINHVIEN::setGioiTinh(const char *gioiTinh)
{
    strcpy(this->gioiTinh, gioiTinh);
}

char* SINHVIEN::getGioiTinh()
{
    return this->gioiTinh;
}

void SINHVIEN::setDiemTrungBinh(float diemTrungBinh)
{
    this->diemTrungBinh = diemTrungBinh;
}

float SINHVIEN::getDiemTrungBinh()
{
    return this->diemTrungBinh;
}

void SINHVIEN::setXepLoaiDaoDuc(const char *xepLoaiDaoDuc)
{
    strcpy(this->xepLoaiDaoDuc, xepLoaiDaoDuc);
}

char* SINHVIEN::getXepLoaiDaoDuc()
{
    return this->xepLoaiDaoDuc;
}

void InRaSVXepLoaiTot(SINHVIEN *array1, int n)
{
    cout << "THONG TIN SINH VIEN DAT LOAI TOT" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << setw(10) << left << "MA SV"
         << setw(30) << left << "TEN SV"
         << setw(20) << left << "NGAY SINH"
         << setw(10) << left << "GIOI TINH"
         << setw(15) << left << "DIEM TB"
         << setw(15) << left << "XEP LOAI DD" << endl;

    for(int i = 0 ; i < n ; i++)
    {
        if(stricmp(array1[i].getXepLoaiDaoDuc(), "Tot") == 0)
        {
            cout << setw(10) << left << array1[i].getMaSV()
                 << setw(30) << left << array1[i].getTenSV()
                 << setw(20) << left << array1[i].getNgaySinh()
                 << setw(10) << left << array1[i].getGioiTinh()
                 << setw(15) << left << array1[i].getDiemTrungBinh()
                 << setw(15) << left << array1[i].getXepLoaiDaoDuc() << endl;
        }
    }
}

int main()
{
    SINHVIEN *array1;
    int n;
    cout << "Nhap so luong: ";
    cin >> n;

    array1 = new SINHVIEN[n];

    string temp;
    float temp2;

    for(int i = 0 ; i < n; i++)
    {
        cout << "Nhap Thong Tin Sinh Vien Thu " << i + 1 << ": " << endl;
       
        cout << "Nhap Ma Sinh Vien: "; 
        fflush(stdin);
        getline(cin, temp);
        array1[i].setMaSV(temp.c_str());
        temp = "";

        cout << "Nhap Ten Sinh Vien: "; 
        fflush(stdin);
        getline(cin, temp);
        array1[i].setTenSV(temp.c_str());
        temp = "";

        cout << "Nhap Ngay Sinh: "; 
        fflush(stdin);
        getline(cin, temp);
        array1[i].setNgaySinh(temp.c_str());
        temp = "";

        cout << "Nhap Gioi Tinh: "; 
        fflush(stdin);
        getline(cin, temp);
        array1[i].setGioiTinh(temp.c_str());
        temp = "";

        cout << "Nhap Diem Trung Binh: "; 
        cin >> temp2;
        array1[i].setDiemTrungBinh(temp2);
        
        cout << "Nhap Xep Loai Dao Duc: "; 
        fflush(stdin);
        getline(cin, temp);
        array1[i].setXepLoaiDaoDuc(temp.c_str());
        temp = "";
    }

    cout << "THONG TIN SINH VIEN" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << setw(10) << left << "MA SV"
         << setw(30) << left << "TEN SV"
         << setw(20) << left << "NGAY SINH"
         << setw(10) << left << "GIOI TINH"
         << setw(15) << left << "DIEM TB"
         << setw(15) << left << "XEP LOAI DD" << endl;

    for(int i = 0 ; i < n ; i++)
    {
        cout << setw(10) << left << array1[i].getMaSV()
             << setw(30) << left << array1[i].getTenSV()
             << setw(20) << left << array1[i].getNgaySinh()
             << setw(10) << left << array1[i].getGioiTinh()
             << setw(15) << left << array1[i].getDiemTrungBinh()
             << setw(15) << left << array1[i].getXepLoaiDaoDuc() << endl;
    }

    InRaSVXepLoaiTot(array1, n);
    return 0;
}