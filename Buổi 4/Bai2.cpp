#include <bits/stdc++.h>
using namespace std;

class WAREHOUSE_RECEIPT;

class PROVIDER //NCC
{
    char providerCode[10];
    char providerName[30];
    char providerAddress[50];

    public:
        void Input();
        void Output();
};

void PROVIDER::Input()
{
    cout << "Nhap Ma NCC: ";
    fflush(stdin);
    gets(providerCode);

    cout << "Nhap Ten NCC: ";
    fflush(stdin);
    gets(providerName);

    cout << "Nhap Dia Chi: ";
    fflush(stdin);
    gets(providerAddress);
}

void PROVIDER::Output()
{
    cout << "Ma NCC: " << setw(10) << left << this->providerCode
         << "Ten NCC: " << setw(30) << left << this->providerName << endl;
    cout << "Dia Chi: " << this->providerAddress << endl;
}

class GOODS
{  
    char goodsName[30];
    float goodsPrice;
    int goodsAmount;

    public:
        void Input();
        void Output();
        friend class WAREHOUSE_RECEIPT;
};

void GOODS::Input()
{
    cout << "Nhap Ten Hang: ";
    fflush(stdin);
    gets(goodsName);

    cout << "Nhap Gia Ban: ";
    cin >> goodsPrice;

    cout << "Nhap So Luong: ";
    cin >> goodsAmount;
}

void GOODS::Output()
{
    cout << setw(30) << left << this->goodsName
         << setw(15) << left << this->goodsPrice
         << setw(15) << left << this->goodsAmount
         << setw(15) << left << goodsPrice * goodsAmount << endl;
}

class WAREHOUSE_RECEIPT
{
    char warehouseReceiptCode[10];
    char dateOfWarehouseReceipt[30];
    PROVIDER provider;
    GOODS *listOfGoods;
    int numsOfGoods;

    public:
        void Input();
        void Output();
        
};

void WAREHOUSE_RECEIPT::Input()
{
    cout << "Nhap Ma Phieu: ";
    fflush(stdin);
    gets(warehouseReceiptCode);

    cout << "Nhap Ngay Lap: ";
    fflush(stdin);
    gets(dateOfWarehouseReceipt);

    provider.Input();

    cout << "Nhap So Luong: ";
    cin >> numsOfGoods;

    listOfGoods = new GOODS[numsOfGoods];

    for(int index = 0 ; index < numsOfGoods ; index++)
    {
        cout << "Nhap Mat Hang Thu " << index + 1 << ": " << endl;
        listOfGoods[index].Input();
    }
}

void WAREHOUSE_RECEIPT::Output()
{
    cout << "\t\tPHIEU NHAP HANG" << endl;
    cout << "Ma Phieu: " << setw(10) << left << warehouseReceiptCode
         << "Ngay Lap: " << setw(30) << left << dateOfWarehouseReceipt << endl;
    provider.Output();

    cout << setw(30) << left << "Ten Hang"
         << setw(15) << left << "Don Gia"
         << setw(15) << left << "So Luong"
         << setw(15) << left << "Thanh Tien" << endl;

    float Total = 0;

    for(int index = 0 ; index < numsOfGoods ; index++)
    {
        listOfGoods[index].Output();
        Total += listOfGoods[index].goodsPrice * listOfGoods[index].goodsAmount;
    }
    cout << "\t\t\tCong Thanh Tien: " << setprecision(15) << Total << endl;
}

int main()
{
    WAREHOUSE_RECEIPT obj1;
    obj1.Input();
    obj1.Output();
    return 0;
}