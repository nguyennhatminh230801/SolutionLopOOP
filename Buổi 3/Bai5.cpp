#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    char name[30];
    int age;
    static int cnt;

    public:
        Employee();
        void Nhap();
        void Xuat();
};

int Employee::cnt = 1;

Employee::Employee()
{
    id = cnt;
    cnt++;
}

void Employee::Nhap()
{
    cout << "Nhap Ten: ";
    fflush(stdin);
    gets(name);

    cout << "Nhap Tuoi:  ";
    cin >> age;
}

void Employee::Xuat()
{
    cout << "ID: " << id << endl;
    cout << "Ten: " << name << endl;
    cout << "Tuoi: " << age << endl;
}

int main()
{
    Employee A, B;

    A.Nhap();
    B.Nhap();

    A.Xuat();
    B.Xuat();
    return 0;
}