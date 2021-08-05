#include <bits/stdc++.h>
using namespace std;

class QUADRATIC_FORMULA //Phuong trinh bac 2
{
    float a, b, c; // default c++ luôn là private nên không cần để

    public:
        QUADRATIC_FORMULA();
        QUADRATIC_FORMULA(float a, float b, float c);
        ~QUADRATIC_FORMULA();
        void INPUT(); //Nhap
        void OUTPUT(); //Xuat
        void SOLVE(); //Giai
};

QUADRATIC_FORMULA::QUADRATIC_FORMULA()
{
    a = b = c = 0;
}

QUADRATIC_FORMULA::QUADRATIC_FORMULA(float a, float b, float c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

QUADRATIC_FORMULA::~QUADRATIC_FORMULA()
{
    a = b = c = 0;
}

void QUADRATIC_FORMULA::INPUT()
{
    cout << "Nhap So A: ";
    cin >> a;
    cout << "Nhap So B: ";
    cin >> b;
    cout << "Nhap So C: ";
    cin >> c;
}

void QUADRATIC_FORMULA::OUTPUT()
{
    cout << a << "x^2" << (b >= 0 ? "+" : "-") << abs(b) << "x" << (c >= 0 ? "+" : "-") << abs(c) << "=0" << endl; 
}

void QUADRATIC_FORMULA::SOLVE()
{
    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                cout << "Phuong Trinh Vo So Nghiem" << endl;
            }
            else
            {
                cout << "Phuong Trinh Vo Nghiem" << endl;
            }
        }
        else
        {
            cout << "Phuong Trinh Co 1 Nghiem: x1 =" << -c / b << endl;
        }
    }
    else
    {
        float delta = b * b - 4 * a * c;

        if(delta < 0)
        {
            cout << "Phuong Trinh Vo Nghiem" << endl;
        }
        else if(delta == 0)
        {
            cout << "Phuong Trinh Co 1 Nghiem: x1 =" << -b / (2 * a) << endl;
        }
        else{
            cout << "Phuong Trinh Co 2 Nghiem" << endl;
            cout << "x1 = " << -b + sqrtf(delta) / (2 * a) << endl;
            cout << "x2 = " << -b - sqrtf(delta) / (2 * a) << endl;
        }
    }
}
int main()
{
    QUADRATIC_FORMULA P(2, 4, 2), Q;

    cout << "Phuong Trinh P: ";
    P.OUTPUT();

    cout << "Ket Qua Phuong Trinh P la: ";
    P.SOLVE();

    cout << "Nhap Phuong Trinh Q: " << endl;
    Q.INPUT();

    cout << "Phuong Trinh Q: ";
    Q.OUTPUT();

    cout << "Ket Qua Phuong Trinh Q la: ";
    Q.SOLVE();

    return 0;
}