// UCP 1 Algoritma.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Type 1
// 1. dengan cara dibagi menjadi dua sorted dan unsorted, bilangan yang lebih besar ada pada sebelah kanan dan yang lebih kecil berada pada sebelah kiri
//	sampai biangan urut dari terkecil sampai terbesar. bilangan pada kolom pertama dikeluarkan dan membuat kolom baru, lalu bilangan pada kolom selanjutnya dikeluarkan secara berulang 
//  dan jika bilangan pada kolom berikutnya lebih besar maka diletakkan pada sebelah kanan dan jika lebih kecil  bearad disebelah kiri
// 2. dengan cara menscanning secara berulang dan membandingkan data yang bersebelahan secara berurutan dari yang terkecil hingga terbesar
//	cari bilangan terkecil dalam array, lalu pindah sampai index 0,  bilangan terkecil berada pada kolom 1, dan dilakakukan berulang sampai bilangan 
//	terbesar pada kolom 4
// 3. memecahkan data dengan jarak 3, setelah dibagi 3 maka diurutkan dengan insertion short, lalu dipecah menjadi 2


#include <iostream>
using namespace std;

int fina[69];
int n;

void input() {
	while (true) {
		cout << "Masukan jumlah data pada array :"; 
		cin >> n;

		if (n <= 69) {
			break;
		}
		else {
			cout << "\nArray yang anda masukan minimal 69 elemen. \n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Memasukan elemen array" << endl;
	cout << "======================" << endl;


	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> fina[i];
	}
}

void insertionshort() {
	int temp;
	int i, j;

	for (i = 1; i <= n - 1; i++) {
		temp = fina[i];

		j = i - 1;

		while (j >= 0 && fina[j] > temp) {
			fina[j + 1] = fina[j];
			j--;
		}

		fina[j + 1] = temp;

		cout << "\nPass " << i << ": ";
		for (int k = 0; k < n; k++) {
			cout << fina[k] << " ";
		}
	}

}

void display() {
	cout << endl;
	cout << "\n==============================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "================================" << endl;

	for (int j = 0; j < n; j++) {
		cout << fina[j] << endl;
	}
	cout << endl;
}

int main() {
	input();
	insertionshort();
	display();

		
}

