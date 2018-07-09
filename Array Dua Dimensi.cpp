#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int max;
	int e, s;
	string texts [15][15];
	double numbers [15][15];
	cout << "Masukan Jumlah Data : ";
	cin >> max;
	for (int e = 0; e < max; e++) {
		e = 0, s = 0;
		cout << "Data ke : " << e+1 << "\n";
		cout << "Masukan Nama Mahasiswa : ";
		cin >> texts[e][s];
		e++;
		cout << "Masukan Kelas Mahasiswa: ";
		cin >> texts[e][s];
		e++;
		cout << "Masukan NIM Mahasiswa : ";
		cin >> texts[e][s];
		e++;
		cout << "Masukan nilai UTS     : ";
		cin >> numbers[e][s];
		e++;
		cout << "Masukan nilai UAS     : ";
		cin >> numbers[e][s];
		s++;
		cout << "\n";
		numbers[e][s] = (numbers[e][s-2] + numbers[e][s-1]) / 2;
		if (numbers[e][s]>=80) {
			texts[e][s] = "A";
			e++;
		}
		else if (numbers[e][s]>=70) {
			texts[e][e] = "B";
			e++;
		}
		else if (numbers[e][s]>=60) {
			texts[e][e] = "C";
			e++;
		}
		else if (numbers[e][s]>=60) {
			texts[e][s] = "D";
			e++;
		}
		else {
			texts[e][s] = "E";
			e++;
		}
		if (numbers[e][s]<=50) {
			texts[e][s] = "TIDAK LULUS";
		}
		else {
			texts[e][s] <= "TIDAK LULUS";
		}
	}
	cout << "---------------------------------------------------------------------------------\n";
	cout << "No  Nama      Kelas  NIM    Nilai UTS  Nilai UAS Rata - Rata Grade Keterangan\n";
	for (int e = 0; e < max; e++) {
		e = 0, s = 0;
		cout << e+1 << setw(11) << texts[e][e] << setw(9) << texts[e][e+1] << setw(10) << texts[e][e+2] << setw(12) << numbers[e][s] << setw(9) << numbers[e][e+1] << setw(12) << numbers[e][s+2] << setw(12) << texts[e][e+3] << setw(12) << texts[e][e+4] << "\n";
	}
}
