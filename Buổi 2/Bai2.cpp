#include <bits/stdc++.h>
using namespace std;

class FRACTION //Phan So
{
    float a, b;

    public:
        FRACTION();
        FRACTION(float a, float b);
        ~FRACTION();
        void INPUT();//Nhap
        void OUTPUT();//Xuat
        void SIMPLIFY_FRACTION();//Rut gon phan so
};

FRACTION::FRACTION()
{
    a = b = 0;
}

FRACTION::FRACTION(float a, float b)
{
    this->a = a;
    this->b = b;
}

FRACTION::~FRACTION()
{
    a = b = 0;
}

void FRACTION::INPUT()
{
    cout << "Nhap Tu So: ";
    cin >> a;
    
    cout << "Nhap Mau So: ";
    cin >> b;
}

void FRACTION::OUTPUT()
{
    if(b == 0)
    {
        cout << "Phan So Khong Hop Le vi Mau So bang 0" << endl;
    }
    else
    {
        cout << a << "/" << b << endl;
    }
}

void FRACTION::SIMPLIFY_FRACTION()
{
    float temp_a = a, temp_b = b;

    while (temp_a != temp_b)
    {
        if(temp_a > temp_b)
        {
            temp_a -= temp_b;
        }
        else{
            temp_b -= temp_a;
        }
    }

    a /= temp_a;
    b /= temp_b;
}

int main()
{
    FRACTION P(2, 4), Q;

    cout << "Phan So P: ";
    P.OUTPUT();

    // cout << "Nhap Phan So Q: " << endl;
    // Q.INPUT();

    Q.SIMPLIFY_FRACTION();

    cout << "Phan So Q sau rut gon: ";
    Q.OUTPUT();
    return 0;
}