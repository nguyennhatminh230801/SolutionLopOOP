#include <bits/stdc++.h>
using namespace std;

class Circle
{
    public:
        float Radius; //Ban Kinh
    
        float Perimeter(); // Chu vi Hinh Tron
        float Area(); // Dien Tich Hinh Tron
};

float Circle::Perimeter()// Chu vi Hinh Tron
{
    return 2 * M_PI * Radius;
}

float Circle::Area()// Dien Tich Hinh Tron
{
    return M_PI * Radius * Radius;
}

int main()
{
    Circle K;
    cout << "Nhap ban kinh Hinh Tron K:";
    cin >> K.Radius;

    cout << "Chu Vi Hinh Tron K: " << K.Perimeter() << endl;
    cout << "Dien Tich Hinh Tron K: " << K.Area() << endl;

    return 0;
}