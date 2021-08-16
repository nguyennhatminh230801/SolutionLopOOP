#include <bits/stdc++.h>
using namespace std;

class EMPLOYEE
{
    char id[20];//Ma Nhan Vien
    char name[50];
    int age;
    static float salary;

    public:
        void Input();
        void Output();
}; 

float EMPLOYEE::salary = 1000;

void EMPLOYEE::Input()
{
    cout << "Nhap Ma Nhan Vien: ";
    fflush(stdin);
    gets(id);

    cout << "Nhap Ten Nhan Vien: ";
    fflush(stdin);
    gets(name);

    cout << "Nhap Tuoi Nhan Vien: ";
    cin >> age;
}

void EMPLOYEE::Output()
{
    cout << "Ma Nhan Vien: " << id << endl;
    cout << "Ten Nhan Vien: " << name << endl;
    cout << "Tuoi: " << age << endl;
    cout << "Luong: " << salary << endl;
}

int main()
{
    EMPLOYEE A, B;

    cout << "Nhap Thong Tin Nhan Vien A: " << endl;
    A.Input();

    cout << "Nhap Thong Tin Nhan Vien B: " << endl;
    B.Input();

    cout << "Thong Tin Nhan Vien A: " << endl;
    A.Output();

    cout << "Thong Tin Nhan Vien B: " << endl;
    B.Output();
    return 0;
}