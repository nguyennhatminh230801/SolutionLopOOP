#include <bits/stdc++.h>
using namespace std;

class Math
{
    public:
        static int abs(int x);
        static int add(int x, int y);
        static int subtract(int x, int y);
        static int min(int x, int y);
        static int max(int x, int y);
        static int pow(int x, int y);
};

int Math::abs(int x)
{
    return (x >= 0 ? x : -x);
}

int Math::add(int x, int y)
{
    return x + y;
}

int Math::subtract(int x, int y)
{
    return x - y;
}

int Math::min(int x, int y)
{
    return (x >= y ? y : x);
}

int Math::max(int x, int y)
{
    return (x >= y ? x : y);
}

int Math::pow(int x, int y)
{
    int answer = 1;

    for(int i = 1 ; i <= y ; i++)
    {
        answer *= x;
    }
    
    return answer;
}

int main()
{
    cout << Math::abs(-3) << endl;
    cout << Math::add(-2, 5) << endl;
    cout << Math::subtract(5, 2) << endl;
    cout << Math::min(35, 67) << endl;
    cout << Math::max(35, 67) << endl;
    cout << Math::pow(2, 9) << endl;     
    return 0;
}