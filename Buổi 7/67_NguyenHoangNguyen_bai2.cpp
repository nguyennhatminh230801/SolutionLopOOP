#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class tamThuc{
private:
    float a,b,c;
public:
    friend istream &operator >> (istream &is, tamThuc &x);
    friend ostream &operator << (ostream &os, tamThuc x);
    void operator--();
    tamThuc operator+(tamThuc x);
    tamThuc operator-(tamThuc x);
};

istream &operator >> (istream &is, tamThuc &x)
{
    cout<<"Nhap a: "; is >> x.a;
    cout<<"Nhap b: "; is >> x.b;
    cout<<"Nhap c: "; is >> x.c;
    return is;
}

ostream &operator << (ostream &os, tamThuc x)
{
    os << "(" << x.a << ") x^2 + " << "(" << x.b << ") x + " << "(" << x.c << ")";
    return os;
}

void tamThuc::operator--()
{
    this-> a /= -1;
    this-> b /= -1;
    this-> c /= -1;
}

tamThuc tamThuc::operator+(tamThuc x)
{
    tamThuc y;
    y.a = this-> a + x.a;
    y.b = this-> b + x.b;
    y.c = this-> c + x.c;
    return y;
}

tamThuc tamThuc::operator-(tamThuc x)
{
    tamThuc y;
    y.a = this-> a - x.a;
    y.b = this-> b - x.b;
    y.c = this-> c - x.c;
    return y;
}

signed main()
{
    tamThuc A,B;
    cin >> A;
    cin >> B;
    cout << "Tam thuc la: " << A << endl;
    cout << "Tam thuc la: " << B << endl;
    --A;
    --B;
    cout<<endl;
    cout << "Tam thuc la: " << A << endl;
    cout << "Tam thuc la: " << B << endl;
    cout<<endl;
    tamThuc C = A + B;
    tamThuc D = A - B;
    cout << "Tam thuc la: " << C << endl;
    cout << "Tam thuc la: " << D << endl;
}

