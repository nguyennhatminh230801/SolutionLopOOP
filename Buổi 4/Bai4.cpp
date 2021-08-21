#include <bits/stdc++.h>
using namespace std;

class PhieuDiCho;

class DiaChi
{
	private: 
		int soNha;
		int ngo;
		char pho[30];
		char phuong[30];
		char quan[30];
		char thanhPho[30];
	
	public: 
		void Nhap();
		void Xuat();
};

void DiaChi::Nhap()
{
    cout << "Nhap So Nha: ";
    cin >> soNha;

    cout << "Nhap Ngo: ";
    cin >> ngo;

    cout << "Nhap Pho: ";
    fflush(stdin);
    gets(pho);

    cout << "Nhap Phuong: ";
    fflush(stdin);
    gets(phuong);

    cout << "Nhap Quan:"; 
    fflush(stdin);
    gets(quan);

    cout << "Nhap Thanh Pho:"; 
    fflush(stdin);
    gets(thanhPho);
}

void DiaChi::Xuat()
{
    cout << "So " << soNha 
         << ", ngo " << ngo 
         << " Pho " << pho 
         << ", phuong " << phuong
         << ", quan " << quan
         << thanhPho << endl;
}

class Hang
{
	private: 
        char tenHang[30];
        float donGia;
	    int soLuong;

	public: 
        void Nhap();
        void Xuat();
        friend class PhieuDiCho;
};

void Hang::Nhap()
{
    cout << "Nhap Ten Hang:"; 
    fflush(stdin);
    gets(tenHang);

    cout << "Nhap Don Gia: ";
    cin >> donGia;

    cout << "Nhap So Luong: ";
    cin >> soLuong;
}

void Hang::Xuat()
{
    cout << setw(30) << left << tenHang
         << setw(15) << left << donGia
         << setw(15) << left << soLuong
         << setw(15) << left << donGia * soLuong << endl;
}

class NguoiMuaHang
{
	private: 
		char tenNguoiMuaHang[30];
		char soDienThoai[20];
		DiaChi diaChi;
	
	public: 
		void Nhap();
		void Xuat();
};

void NguoiMuaHang::Nhap()
{
    cout << "Nhap Ten Nguoi Mua Hang:"; 
    fflush(stdin);
    gets(tenNguoiMuaHang);

    cout << "Nhap So Dien Thoai:"; 
    fflush(stdin);
    gets(soDienThoai);

    diaChi.Nhap();
}

void NguoiMuaHang::Xuat()
{
    cout << "Nguoi Di Cho: " << tenNguoiMuaHang << endl;
    cout << "So Dien Thoai: " << soDienThoai << endl;
    cout << "Dia Chi: "; diaChi.Xuat();
}

class PhieuDiCho
{
	private: 
		char maPhieu[20];
        char ngayDiCho[30];
		NguoiMuaHang nguoiMuaHang;
		Hang* dsMatHang;
		int slMatHang;

	public: 
		void Nhap();
		void Xuat();
};

void PhieuDiCho::Nhap()
{
    cout << "Nhap Ma Phieu:"; 
    fflush(stdin);
    gets(maPhieu);

    cout << "Nhap Ngay Di Cho:"; 
    fflush(stdin);
    gets(ngayDiCho);

    cout << "Nhap Thong Tin Nguoi Mua Hang: " << endl;
    nguoiMuaHang.Nhap();

    cout << "Nhap So Luong Mat Hang: ";
    cin >> slMatHang;

    dsMatHang = new Hang[slMatHang];

    for(int i = 0 ; i < slMatHang ; i++)
    {
        cout << "Nhap Mat Hang Thu " << i + 1 << ": " << endl;
        dsMatHang[i].Nhap();
    }
}

void PhieuDiCho::Xuat()
{
    cout << "\t\tPHIEU DI CHO" << endl;
    cout << "Ma Phieu: " << setw(20) << left << maPhieu
         << "Ngay: " << setw(30) << left << ngayDiCho << endl;
    nguoiMuaHang.Xuat();

    cout << setw(30) << left << "TEN HANG"
         << setw(15) << left << "DON GIA"
         << setw(15) << left << "SO LUONG"
         << setw(15) << left << "THANH TIEN" << endl;
    float Tong = 0;
    for(int i = 0 ; i < slMatHang; i++)
    {
        dsMatHang[i].Xuat();
        Tong += dsMatHang[i].donGia * dsMatHang[i].soLuong;
    }
    cout << "\t\tCong Thanh Tien: " << Tong << endl; 
    cout << "Luu y : Phieu chi co tac dung trong BTVN buoi 4 cua lop OOP 2021.";
}

int main()
{
    PhieuDiCho obj1;
    obj1.Nhap();
    obj1.Xuat();
    return 0;
}