#include<iostream>
#include<string.h>

using namespace std;

class Date {
	int d, m, y;
public:
	void Input();
	void Output();
	friend class Tivi;
};

class Producer {
	char producerName[30];
	char address[30];
public:
	void Input();
	void Output();
	friend class Product;
};

class Product {
	char productName[30];
	Producer x;
	double price;
public:
	void Input();
	void Output();
	Product() {
		strcpy(productName, "");
		strcpy(x.producerName, "");
		strcpy(x.address, "");
		price = 0;
	}
};

class Tivi : public Product {
	float size;
	Date date;
public:
	void Input();
	void Output();
	Tivi() : Product() {
		size = 0;
		date.d = date.m = date.y = 0;
	}
};

void Date::Input() {
	cout << "Ngay : "; cin >> d;
	cout << "Thang: "; cin >> m;
	cout << "Nam  : "; cin >> y;
}

void Date::Output() {
	cout << d << "/" << m << "/" << y << endl;
}

void Producer::Input() {
	cout << "Ten NSX: "; fflush(stdin); gets(producerName);
	cout << "Dia chi: "; fflush(stdin); gets(address);
}

void Producer::Output() {
	cout << "Ten NSX: " << producerName << endl;
	cout << "Dia chi: " << address << endl;
}

void Product::Input() {
	cout << "Ten hang: "; fflush(stdin); gets(productName);
	x.Input();
	cout << "Don gia: "; cin >> price;
}

void Product::Output() {
	cout << "Ten Hang: " << productName << endl;
	x.Output();
	cout << "Don gia: " << price << endl;
}

void Tivi::Input() {
	Product::Input();
	cout << "Kich thuoc: "; cin >> size;
	date.Input();
}

void Tivi::Output() {
	Product::Output();
	cout << "Kich thuoc: " << size << " inch" << endl;
	cout << "Ngay nhap: "; date.Output();
}

int main() {
	Tivi a;
	a.Input();
	cout << "\n--->Thong tin Tivi\n";
	a.Output();
	return 0;
}
