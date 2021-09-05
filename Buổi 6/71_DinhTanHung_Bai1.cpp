#include <iostream>

using namespace std;

class Vehicle{
	char band[20];
	int publishYear;
	char manufacturer[20];
public:
	void Input();
	void Output();
};

void Vehicle::Input() {
	cout << "Nhap ten nhan hieu: "; fflush(stdin); gets(band);
	cout << "Nhap nam SX: "; cin >> publishYear;
	cout << "Nhap hang sx: "; fflush(stdin); gets(manufacturer);
}

void Vehicle::Output() {
	cout << "Nhan Hieu: " << band << endl;
	cout << "Nam SX: " << publishYear << endl;
	cout << "Hang SX: " << manufacturer << endl;
}

class OTO : public Vehicle{
	int seats;
	int cc;
public:
	void Input();
	void Output();
};

void OTO::Input() {
	Vehicle::Input();
	cout << "Nhap so cho ngoi: "; cin >> seats;
	cout << "Nhap dung tich: "; cin >> cc;
}

void OTO::Output() {
	Vehicle::Output();
	cout << "So cho ngoi: " << seats << endl;
	cout << "Dung tich: " << cc << endl;
}

class MOTO : public Vehicle{
	int cc;
public:
	void Input();
	void Output();
};

void MOTO::Input() {
	Vehicle::Input();
	cout << "Nhap phan khoi: "; cin >> cc;
}

void MOTO::Output() {
	Vehicle::Output();
	cout << "Phan khoi cc: " << cc << endl;
}

int main() {
	OTO a;
	MOTO b;
	cout << "Nhap thong tin Oto\n";
	a.Input();
	cout << "\nNhap thong tin Moto\n";
	b.Input();
	cout << "\n---Thong tin xe---\n";
	cout << "\nThong tin Oto\n";
	a.Output();
	cout << "\nThong tin Moto\n";
	b.Output();
	return 0;
}
