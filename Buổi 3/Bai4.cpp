#include <bits/stdc++.h>
using namespace std;

class FACULTY;

class SCHOOL
{
    char name[30];
    char date[20];

    public:
        friend class FACULTY;
};

class FACULTY
{
    char name[30];
    char date[20];
    SCHOOL x;

    public:
        void Nhap();
        void Xuat();
};

void FACULTY::Nhap()
{
    cout << "Nhap Ten Khoa: ";
    fflush(stdin);
    gets(name);

    cout << "Nhap Ngay Thanh Lap Khoa: ";
    fflush(stdin);
    gets(date);

    cout << "Nhap Ten Truong: ";
    fflush(stdin);
    gets(x.name);

    cout << "Nhap Ngay Thanh Lap Truong: ";
    fflush(stdin);
    gets(x.date);
}

void FACULTY::Xuat()
{
    cout << setw(30) << left << name 
         << setw(20) << left << date
         << setw(30) << left << x.name
         << setw(20) << left << x.date;
}

class STUDENT
{
    FACULTY y;
    char Class[30];
    float score;

    public:
        void Nhap();
        void Xuat();
        STUDENT();
};

STUDENT::STUDENT()
{
    strcpy(Class, "");
    score = 0;
}

void STUDENT::Nhap()
{
    cout << "Nhap Khoa Cua Sinh Vien: " << endl;
    y.Nhap();

    cout << "Nhap Ten Lop: ";
    fflush(stdin);
    gets(Class);

    cout << "Nhap Diem: ";
    cin >> score;
}

void STUDENT::Xuat()
{
    y.Xuat();
    cout << setw(30) << left << Class 
         << setw(5) << left << setprecision(5) << score << endl;
}

int main()
{
    STUDENT *array1;
    int n;

    cout << "Nhap So Luong Sinh Vien: ";
    cin >> n;

    array1 = new STUDENT[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout << "Nhap Thong Tin Sinh Vien Thu " << i + 1 << endl;
        array1[i].Nhap();
    }

    cout << setw(30) << left << "Ten Khoa"
         << setw(20) << left << "Ngay TL Khoa"
         << setw(30) << left << "Ten Truong"
         << setw(20) << left << "Ngay TL Truong"
         << setw(30) << left << "Lop"
         << setw(5)  << left << "Diem Thi" << endl;

    for(int i = 0 ; i < n ; i++)
    {
        array1[i].Xuat();
    }
    
    return 0;
}