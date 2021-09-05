#include<iostream>
#include<string.h>

using namespace std;

class Electronic {
	double power;
	double voltage;
public:
	Electronic(double power, double voltage) {
		this->power = power;
		this->voltage = voltage;
	}
	friend class Washer;
	friend class Refrigerator;
};

class Washer : public Electronic {
	double capacity;
	char type[10];
public:
	Washer(double power, double voltage, double capacity, char *type) : Electronic(power, voltage) {
		this->capacity = capacity;
		strcpy(this->type, type);
	}
	void Output();
};

class Refrigerator : public Electronic {
	double capacity;
	int numberOfCompartment;
public:
	Refrigerator(double power, double voltage, double capacity, int numberOfCompartment) : Electronic(power, voltage) {
		this->capacity = capacity;
		this->numberOfCompartment = numberOfCompartment;
	}
	void Output();
};

void Washer::Output() {
	cout << "Cong suat: " << power <<endl;
	cout << "Dien ap : " << voltage <<endl;
	cout << "Dung tich: " << capacity << " kg" <<endl;
	cout << "Loai: " << type << endl;
}

void Refrigerator::Output() {
	cout << "Cong suat: " << power <<endl;
	cout << "Dien ap : " << voltage <<endl;
	cout << "Dung tich: " << capacity << " lit" <<endl;
	cout << "So ngan: " << numberOfCompartment << endl;
}

int main() {
	Washer a(250, 220, 10, (char*)"Moi tinh");
	Refrigerator b(200, 220, 300, 6);
	cout << "\n-->Thong tin may giat\n";
	a.Output();
	cout << "\n\n-->Thong tin tu lanh\n";
	b.Output();
	return 0;
}
