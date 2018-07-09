#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

main() {
	int max;
	int j, k;
	string texts [20][20];
	double numbers [20][20];
	cout << "Input Jumlah Data : ";
	cin >> max;
	for (int i = 0; i < max; i++) {
		j = 0, k = 0;
		cout << "Data ke : " << i+1 << "\n";
		cout << "Input Nama Mahasiswa : ";
		cin >> texts[i][j];
		j++;
		cout << "Input Kelas Mahasiswa: ";
		cin >> texts[i][j];
		j++;
		cout << "Input NIM Mahasiswa : ";
		cin >> texts[i][j];
		j++;
		cout << "Input nilai UTS     : ";
		cin >> numbers[i][k];
		k++;
		cout << "Input nilai UAS     : ";
		cin >> numbers[i][k];
		k++;
		cout << "\n";
		numbers[i][k] = (numbers[i][k-2] + numbers[i][k-1]) / 2;
		if (numbers[i][k]>=80) {
			texts[i][j] = "A";
			j++;
		}
		else if (numbers[i][k]>=70) {
			texts[i][j] = "B";
			j++;
		}
		else if (numbers[i][k]>=60) {
			texts[i][j] = "C";
			j++;
		}
		else if (numbers[i][k]>=50) {
			texts[i][j] = "D";
			j++;
		}
		else {
			texts[i][j] = "E";
			j++;
		}
		if (numbers[i][k]>=60) {
			texts[i][j] = "LULUS";
		}
		else {
			texts[i][j] = "TIDAK LULUS";
		}
	}
	cout << "------------------------------------------------------------------------------------------\n";
	cout << "No  Nama           Kelas  NIM            Nilai UTS  Nilai UAS  Rata - Rata  Grade  Keterangan\n";
	for (int i = 0; i < max; i++) {
		j = 0, k = 0;
		cout << i+1 << setw(8) << texts[i][j] << setw(12) << texts[i][j+1] << setw(16) << texts[i][j+2] << setw(6) << numbers[i][k] << setw(11) << numbers[i][k+1] << setw(11) << numbers[i][k+2] << setw(12) << texts[i][j+3] << setw(16) << texts[i][j+4] << "\n";
	}
}
