#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class soPhuc{
private:
    float a,b;
public:
    soPhuc();
    soPhuc(float a, float b);
    ~soPhuc();
    friend ostream &operator << (ostream &os, soPhuc x);
    soPhuc operator+(soPhuc x);
    soPhuc operator-(soPhuc x);
};

soPhuc::soPhuc()
{
    a = 0;
    b = 0;
}

soPhuc::soPhuc(float a, float b)
{
    this-> a = a;
    this-> b = b;
}

soPhuc::~soPhuc()
{
    this-> a = 0;
    this-> b = 0;
}

ostream &operator << (ostream &os, soPhuc x)
{
    os << x.a << " + i * " << x.b<<endl;
    return os;
}

soPhuc soPhuc::operator+(soPhuc x)
{
    soPhuc SP3;
    SP3.a = this-> a + x.a;
    SP3.b = this-> b + x.b;
    return SP3;
}

soPhuc soPhuc::operator-(soPhuc x)
{
    soPhuc SP4;
    SP4.a = this-> a - x.a;
    SP4.b = this-> b - x.b;
    return SP4;
}

signed main()
{
    soPhuc SP3, SP4;
    soPhuc SP1(1,2);
    soPhuc SP2(3,4);
    SP3 = SP1 + SP2;
    cout<<"So phuc sp3 la: "<<SP3<<endl;
    SP4 = SP1 - SP2 ;
    cout<<"So phuc sp4 la: "<<SP4<<endl;
}

