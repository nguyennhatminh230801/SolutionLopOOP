#include <bits/stdc++.h>
using namespace std;

class Math
{
    public:
        static int absolute(int x);
        static int add(int x, int y);
        static int subtract(int x, int y);
        static int minimum(int x, int y);
        static int maximum(int x, int y);
        static int power(int x, int y);
};

int Math::absolute(int x)
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

int Math::minimum(int x, int y)
{
    return (x >= y ? y : x);
}

int Math::maximum(int x, int y)
{
    return (x >= y ? x : y);
}

int Math::power(int x, int y)
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
    cout << Math::absolute(-3) << endl;
    cout << Math::add(-2, 5) << endl;
    cout << Math::subtract(5, 2) << endl;
    cout << Math::minimum(35, 67) << endl;
    cout << Math::maximum(35, 67) << endl;
    cout << Math::power(2, 9) << endl;     
    return 0;
}