#include <bits/stdc++.h>
using namespace std;

class Student
{
    private:
        char StudentCode[15]; //Ma Sinh Vien
        char FullName[50]; // Ho Ten
        int DOB_Day; //Ngay Sinh
        int DOB_Month; //Thang Sinh
        int DOB_Year; //Nam Sinh
        char Gender[10]; //Gioi Tinh
        float GradePointAverage;//Diem Trung Binh
        char MoralGraduate[15]; //Diem Dao Duc

    public:
        void Input();//Nhap Vao
        void Output();//Xuat Ra
        float getGPA(); //Lay ra Diem Trung Binh
};

void Student::Input()
{
    cout << "Nhap Ma Sinh Vien: ";
    fflush(stdin);
    gets(StudentCode);

    cout << "Nhap Ho Ten: ";
    fflush(stdin);
    gets(FullName);

    cout << "Nhap Ngay Cua Ngay Sinh: ";
    cin >> DOB_Day;

    cout << "Nhap Thang Cua Nam Sinh: ";
    cin >> DOB_Month;

    cout << "Nhap Nam Cua Nam Sinh: ";
    cin >> DOB_Year;

    cout << "Nhap Gioi Tinh: ";
    fflush(stdin);
    gets(Gender);

    cout << "Nhap Diem Trung Binh: ";
    cin >> GradePointAverage;

    cout << "Nhap Danh Gia Dao Duc: ";
    fflush(stdin);
    gets(MoralGraduate);
}

void Student::Output()
{
    cout << setw(15) << StudentCode
         << setw(50) << FullName
         << setw(20) << DOB_Day << "/" << DOB_Month << "/" << DOB_Year
         << setw(10) << Gender
         << setw(17) << GradePointAverage
         << setw(15) << MoralGraduate << endl;
}

float Student::getGPA()
{
    return GradePointAverage;
}

int main()
{
    Student SVDiemCao, SVDiemThap;

    cout << "Nhap Thong Tin Sinh Vien Diem Cao: " << endl; SVDiemCao.Input();
    cout << "Nhap Thong Tin Sinh Vien Diem Thap: " << endl; SVDiemThap.Input();

    if(SVDiemThap.getGPA() > SVDiemCao.getGPA())
    {
        Student temp = SVDiemThap;
        SVDiemThap = SVDiemCao;
        SVDiemCao = temp;
    }

    cout << setw(15) << "Ma Sinh Vien"
         << setw(50) << "Ten Sinh Vien"
         << setw(20) << "Ngay Sinh"
         << setw(10) << "Gioi Tinh"
         << setw(17) << "Diem Trung Binh"
         << setw(15) << "Diem Dao Duc" << endl;

    SVDiemCao.Output();
    SVDiemThap.Output();
    
    return 0;
}