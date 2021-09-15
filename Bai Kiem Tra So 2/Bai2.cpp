#include <bits/stdc++.h>
using namespace std;

class ARRAY
{
    int *array1;
    int n;

    public:
        ARRAY();
        ARRAY(int n);
        ~ARRAY();
        friend istream &operator>>(istream &input, ARRAY &obj1);
        friend ostream &operator<<(ostream &output, ARRAY obj1);
        ARRAY operator- (); //Toan tu doi dau
        int operator~ (); //Toan tu tinh trung binh cong
};

ARRAY::ARRAY()
{
    n = 0;
    array1 = NULL;
}

ARRAY::ARRAY(int n)
{
    //Buoc 1 gan n
    this->n = n;

    //Buoc 2: cap phat mang N so nguyen
    array1 = new int[n];

    //Buoc 3: gan het phan tu trong mang la 0
    for(int i = 0 ; i < n ; i++)
    {
        array1[i] = 0;
    }
}

ARRAY::~ARRAY()
{
    n = 0;
    array1 = NULL;
}

istream &operator>>(istream &input, ARRAY &obj1)
{
    cout << "Nhap So Luong: ";
    input >> obj1.n;

    obj1.array1 = new int[obj1.n];

    cout << "Nhap Day So: ";
    for(int i = 0 ; i < obj1.n ; i++)
    {
        input >> obj1.array1[i];
    }

    return input;
}

ostream &operator<<(ostream &output, ARRAY obj1)
{
    output << "Day So Can Tim La: ";
    for(int i = 0 ; i < obj1.n ; i++)
    {
        output << obj1.array1[i] << " ";
    }
    output << endl;
    return output;
}

//Luu y kieu tra ve la void cung chap nhan duoc
ARRAY ARRAY::operator- () //Toan tu doi dau
{
    for(int i = 0 ; i < n ; i++)
    {
        if(array1[i] > 5)
        {
            array1[i] = -array1[i];
        }
    }

    return *this;
}

int ARRAY::operator~ () //Toan tu doi dau
{
    int max1 = array1[0], min1 = array1[0];

    for(int i = 0 ; i < n ; i++)
    {
        if(max1 < array1[i])
        {
            max1 = array1[i];
        }

        if(min1 > array1[i])
        {
            min1 = array1[i];
        }
    }

    return (max1 + min1) / 2;
}

int main()
{
    ARRAY obj1, obj2;
    cout << "Nhap Mang 1: " << endl;
    cin >> obj1;
    
    cout << "Nhap Mang 2: " << endl;
    cin >> obj2;

    cout << "Mang 1: " << endl << obj1
         << "Mang 2: " << endl << obj2 << endl;

    obj1 = -obj1, obj2 = -obj2;

    cout << "Mang 1: " << endl << obj1
         << "Mang 2: " << endl << obj2 << endl;

    cout << "Trung binh cong mang 1: " << ~obj1 << endl;
    cout << "Trung binh cong mang 2: " << ~obj2 << endl;
    
    return 0;
}