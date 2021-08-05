#include <bits/stdc++.h>
using namespace std;

class GOODS//Hang Hoa
{
    char GoodsCode[15];//Ma Hang
    char GoodsName[50];//Ten Hang
    char DateOfGoodsReceipt[20]; //Ngay Nhap Hang
    char Manufacturer[50];//Nha San Xuat
    float GoodsPrice; //Don Gia
    float GoodsAmount; // So Luong

    public:
        GOODS();
        GOODS(char GoodsCode[], char GoodsName[], char DateOfGoodsReceipt[], char Manufacturer[], float GoodsPrice, float GoodsAmount);
        ~GOODS();
        void INPUT();
        void OUTPUT();
};

GOODS::GOODS()
{
    strcpy(GoodsCode, "");
    strcpy(GoodsName, "");
    strcpy(DateOfGoodsReceipt, "");
    strcpy(Manufacturer, "");
    GoodsPrice = 0;
    GoodsAmount = 0;
}

GOODS::GOODS(char GoodsCode[], char GoodsName[], char DateOfGoodsReceipt[], char Manufacturer[], float GoodsPrice, float GoodsAmount)
{
    strcpy(this->GoodsCode, GoodsCode);
    strcpy(this->GoodsName, GoodsName);
    strcpy(this->DateOfGoodsReceipt, DateOfGoodsReceipt);
    strcpy(this->Manufacturer, Manufacturer);
    this->GoodsPrice = GoodsPrice;
    this->GoodsAmount = GoodsAmount;
}

GOODS::~GOODS()
{
    strcpy(GoodsCode, "");
    strcpy(GoodsName, "");
    strcpy(DateOfGoodsReceipt, "");
    strcpy(Manufacturer, "");
    GoodsPrice = 0;
    GoodsAmount = 0;
}

void GOODS::INPUT()
{
    cout << "Nhap Ma Hang: ";
    fflush(stdin);
    gets(GoodsCode);

    cout << "Nhap Ten Hang: ";
    fflush(stdin);
    gets(GoodsName);

    cout << "Nhap Ngay Nhap Hang: ";
    fflush(stdin);
    gets(DateOfGoodsReceipt);

    cout << "Nhap Hang San Xuat: ";
    fflush(stdin);
    gets(Manufacturer);

    cout << "Nhap Don Gia: ";
    cin >> GoodsPrice;

    cout << "Nhap So Luong: ";
    cin >> GoodsAmount;
}

void GOODS::OUTPUT()
{
    cout << setw(15) << left << GoodsCode
         << setw(50) << left << GoodsName
         << setw(20) << left << DateOfGoodsReceipt
         << setw(50) << left << Manufacturer
         << setw(15) << left << setprecision(15) << GoodsPrice
         << setw(15) << left << setprecision(15) << GoodsAmount
         << setw(15) << left << setprecision(15) << GoodsPrice * GoodsAmount << endl;
}

int main()
{
    GOODS P, Q("H02", "Hang 2", "23/08/2021", "Toyota", 250000, 100);

    cout << "Nhap Thong Tin Cho Mat Hang P: ";
    P.INPUT();

    cout << setw(15) << left << "MA HANG"
         << setw(50) << left << "TEN HANG"
         << setw(20) << left << "NGAY NHAP"
         << setw(50) << left << "NHA SAN XUAT"
         << setw(15) << left << "DON GIA"
         << setw(15) << left << "SO LUONG"
         << setw(15) << left << "THANH TIEN" << endl;

    P.OUTPUT();
    Q.OUTPUT();

    return 0;
}