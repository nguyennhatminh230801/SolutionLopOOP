#include <bits/stdc++.h>
using namespace std;

class Officer //Can Bo
{
    private:
        char OfficerCode[15];//Ma Can Bo
        char FullName[50];//Ho Ten
        char DateOfBirth[20];//Ngay Sinh
        int NumberOfWorkingDays;//So Ngay Lam Viec

    public:
        void Input();
        void Output();
        float Salary();//Tien Luong

};

void Officer::Input()
{
    cout << "Nhap Ma Can Bo: ";
    fflush(stdin);
    gets(OfficerCode);

    cout << "Nhap Ten Can Bo: ";
    fflush(stdin);
    gets(FullName);

    cout << "Nhap Ngay Thang Nam Sinh: ";
    fflush(stdin);
    gets(DateOfBirth);

    cout << "Nhap So Ngay Lam Viec: ";
    cin >> NumberOfWorkingDays;
}

void Officer::Output()
{
    cout << "Ma Can Bo: " << OfficerCode << endl;
    cout << "Ten Can Bo: " << FullName << endl;
    cout << "Ngay Thang Nam Sinh: " << DateOfBirth << endl;
    cout << "So Ngay Lam Viec: " << NumberOfWorkingDays << endl;
}   

float Officer::Salary()
{
    return NumberOfWorkingDays * 250000;
}

int main()
{
    Officer obj1;
    
    cout << "Nhap Thong Tin Can Bo: " << endl;obj1.Input();
    cout << "THONG TIN CAN BO" << endl;obj1.Output();
    cout << "Luong Duoc Nhan: " << setprecision(20) << obj1.Salary();
    return 0;
}