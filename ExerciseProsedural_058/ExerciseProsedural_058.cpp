#include <iostream>

using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}


	double reratanil[20];
	string nama[20];
	int nilM[20], nilB[20];

string status(double c) {
	if (c >= 70)
		return "diterima";
	else
		return "ditolak";
}


int main() {
	double nilM, nilB;
	for (int i = 0; i < 20; i++) {

		cout << "\nMasukkan nilai Matematika = ";
		cin >> nilM;
		cout << "Masukkan nilai Bahasa = ";
		cin >> nilB;
		cout << "Status Kelulusan : " << status(rerata(nilM, nilB));
	}
}