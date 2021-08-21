#include <bits/stdc++.h>
using namespace std;

class WAREHOUSE_RECEIPT;

class PROVIDER //NCC
{
    char providerCode[10];
    char providerName[30];
    char providerAddress[50];
    char providerPhoneNumber[20];

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

    cout << "Nhap So Dien Thoai: ";
    fflush(stdin);
    gets(providerPhoneNumber);
}

void PROVIDER::Output()
{
    cout << "Ma NCC: " << setw(10) << left << this->providerCode
         << "Ten NCC: " << setw(30) << left << this->providerName << endl;
    cout << "Dia Chi: " << setw(50) << left << this->providerAddress 
         << "SDT: " << setw(20) << left << this->providerPhoneNumber << endl;
}

class PRODUCT
{  
    char productCode[10];
    char productName[30];
    char productStatus[30];
    int productAmount;
    float productPrice;
    
    public:
        void Input();
        void Output();
        friend class WAREHOUSE_RECEIPT;
};

void PRODUCT::Input()
{
    cout << "Nhap Ma Hang: ";
    fflush(stdin);
    gets(productCode);

    cout << "Nhap Ten Hang: ";
    fflush(stdin);
    gets(productName);

    cout << "Nhap Tinh Trang: ";
    fflush(stdin);
    gets(productStatus);

    cout << "Nhap So Luong: ";
    cin >> productAmount;

    cout << "Nhap Gia Ban: ";
    cin >> productPrice; 
}

void PRODUCT::Output()
{
    cout << setw(10) << left << this->productCode 
         << setw(30) << left << this->productName 
         << setw(30) << left << this->productStatus
         << setw(15) << left << this->productAmount
         << setw(15) << left << this->productPrice << endl;
}

class WAREHOUSE_RECEIPT
{
    char warehouseReceiptCode[10];
    PROVIDER provider;
    PRODUCT *listOfProduct;
    int numsOfProduct;

    public:
        void Input();
        void Output();     
};

void WAREHOUSE_RECEIPT::Input()
{
    cout << "Nhap Ma Phieu: ";
    fflush(stdin);
    gets(warehouseReceiptCode);

    provider.Input();

    cout << "Nhap So Luong: ";
    cin >> numsOfProduct;

    listOfProduct = new PRODUCT[numsOfProduct];

    for(int index = 0 ; index < numsOfProduct ; index++)
    {
        cout << "Nhap Thong Tin San Pham " << index + 1 << ": " << endl;
        listOfProduct[index].Input();
    }
}

void WAREHOUSE_RECEIPT::Output()
{
    cout << "Dai Hoc Cong Nghiep Ha Noi" << endl;
    cout << "\t\tPHIEU NHAP THIET BI MAY TINH" << endl;
    cout << "Ma Phieu: " << warehouseReceiptCode << endl;
    provider.Output();

    cout << setw(10) << left << "MA SP"
         << setw(30) << left << "TEN SP"
         << setw(30) << left << "TINH TRANG"
         << setw(15) << left << "SO LUONG"
         << setw(15) << left << "DON GIA" << endl;

    float Total = 0;

    for(int index = 0 ; index < numsOfProduct ; index++)
    {
        listOfProduct[index].Output();
        Total += listOfProduct[index].productPrice * listOfProduct[index].productAmount;
    }

    cout << "Tong So Luong San Pham: " << setw(10) << left << numsOfProduct
         << "\t\tTong So Tien: " << setw(15) << left << Total << endl;
}

int main()
{
    WAREHOUSE_RECEIPT obj1;
    obj1.Input();
    obj1.Output();
    return 0;
}