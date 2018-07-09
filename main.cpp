#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

// Function
void selectMenu(string a);
void tampilMenu();
void inputObat();
void tampilObat();
void tampilObatSort();
void transaksiObat();
void tampilTransaksi();
void cariDataObat();

// Struct
struct Obat {
	int id;
	string nama;
	int harga;
	int stok;
	int transaksi{};
};

struct Obat obat[100], obatSort[100];

// Global Variable
int flagObat = 0;
int id = 0;
int n = 0;

int main() {
	
	string ulang;
	
	do {
		tampilMenu();
		cout << "\nUlangi Program (Y/n) > ";
		cin >> ulang;
	}
	while(ulang == "Y" || ulang == "y");
	
	return 0;
}

void selectMenu(string a) {
	
	if(a == "1"){
		inputObat();
	} else if(a == "2") {
		tampilObatSort();
	} else if(a == "3") {
		transaksiObat();
	} else if(a == "4") {
		tampilTransaksi();
	} else if(a == "5") {
		cariDataObat();
	} else if(a == "6") {
		exit(0);
	}
	
}

void tampilMenu(){
	string inputPil;
	
	do {
		system("cls");
		cout << "----------- Apotek Farma------------" << endl;
		cout<<"       Jl. Semanan Raya Kalideres No.7\n";
 		cout<<"                 Cabang Sumatra Barat \n";
		cout << "1. Masukkan Obat\n2. Tampil Obat\n3. Transaksi Obat\n4. Tampil Transaksi\n5. Cari Data Obat\n6. Exit\n\nMasukkan Pilihan Anda > ";
		cin >> inputPil;
	}
	while(inputPil != "1" && inputPil != "2" && inputPil != "3" && inputPil != "4" && inputPil != "5" && inputPil != "6");
	system("cls");
	
	selectMenu(inputPil);
	
}

void inputObat() {
	int n;
	cout << "Masukkan Banyak Obat > ";
	cin >> n;
	
	for (int i = 0 ; i < n ; i = i + 1){
		obat[flagObat].id = flagObat;
		obatSort[flagObat].id = flagObat;
		cout << "Masukkan nama obat > ";
		cin >> obat[flagObat].nama;
		obatSort[flagObat].nama = obat[flagObat].nama;
		cout << "Masukkan harga obat > ";
		cin >> obat[flagObat].harga;
		obatSort[flagObat].harga = obat[flagObat].harga;
		cout << "Masukkan stok obat > ";
		cin >> obat[flagObat].stok;
		obatSort[flagObat].stok = obat[flagObat].stok;
		
		flagObat = flagObat + 1;
	}
	
}

void tampilObat(){
	
	if(flagObat == 0) {
		cout << "Data Salah !!" << endl;
	} else {
		cout << "Tampil Data Obat" << endl;
		for (int i = 0 ; i < flagObat ; i++) {
			cout << "=========================" << endl;
			cout << "Id = " << obat[i].id << endl;
			cout << "Nama = " << obat[i].nama << endl;
			cout << "Harga = " << obat[i].harga << endl;
			cout << "Stok = " << obat[i].stok << endl;
		}
	}
}

void tampilObatSort() {
	
	int flagObatSort = 0;
	struct Obat temp;
	
	if(flagObat == 0) {
		cout << "Data Salah !!" << endl;
	} else {
		for(int i = 0 ; i < flagObat ; i = i + 1) {
			for(int j = i ; j < flagObat ; j = j + 1) {
				if(obatSort[i].stok > obatSort[j].stok) {
					temp = obatSort[i];
					obatSort[i] = obatSort[j];
					obatSort[j] = temp;
				}
			}
		}
		cout << "Tampil Data Obat" << endl;
		for (int i = 0 ; i < flagObat ; i = i + 1) {
			cout << "=========================" << endl;
			cout << "Id = " << obatSort[i].id << endl;
			cout << "Nama = " << obatSort[i].nama << endl;
			cout << "Harga = " << obatSort[i].harga << endl;
			cout << "Stok = " << obatSort[i].stok << endl;
		}
	}
}

void transaksiObat(){
	int x, uang;
	
	if(flagObat == 0) {
		cout << "Data Salah !!" << endl;
	} else {
	
		tampilObat();
	
		cout << "Masukkan Banyak Transaksi Obat > ";
		cin >> n;
	if (n == 0) {
		cout << "Data salah !!";
	} else {
		for (int i = 0 ; i < n ; i = i + 1){
			cout << "Masukkan Id Obat > ";
			cin >> id;
			cout << "Masukkan Banyak Obat > ";
			cin >> x;
			obat[id].transaksi += obat[id].harga * x;
		}
		cout << "Total Transaksi Anda adalah > Rp." << obat[id].transaksi << endl;
		cout << "Masukkan Uang Anda > ";
		cin >> uang;
		if(uang < obat[id].transaksi){
			cout << "Uang Anda Tidak Cukup !";
		} else {
			obat[id].stok = obat[id].stok - x;
			cout << "Uang kembalian anda adalah Rp." << uang - obat[id].transaksi; 
		}
	}
}
	cout << endl;
}

void tampilTransaksi(){
	cout << "Ini Tampil Transaksi obat" << endl;
	cout<<left<<setw(22)<<""<<""<<" Total : "<<endl;
	for (int i = 0; i < n; i++) {
		cout<<left<<setw(30)<<"Transaksi: " << obat[id].transaksi;
		cout<<left<<setw(8)<<"\nobat: " << obat[id].nama;
	}
}

void cariDataObat(){
	int id = 0;
	
	if(flagObat == 0) {
		cout << "Data Tidak Ditemukan" << endl;
	} else {
		tampilObat();
		cout << endl << "Masukkan id obat yang ingin di cari > ";
		cin >> id;
		cout << endl << "=========================" << endl;
		cout << "Id = " << obat[id].id << endl;
		cout << "Nama = " << obat[id].nama << endl;
		cout << "Harga = " << obat[id].harga << endl;
		cout << "Stok = " << obat[id].stok << endl;
	}
}

