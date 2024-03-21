//  ===== SOAL TYPE A =====
// 
// 1.	Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen.?
// 2.	Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen - elemen. ?
// 3.	Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan ? Jelaskan.
// 
// 1. Insertion Sort - Dengan Cara menyimpan array yg di tunjuk ke temporary, 
//    lalu meng cek array selanjutnya, array di cek dari kanan dahulu, misal angka di array kirinya tersebut lebih kecil,
//    array yg di tunjuk dilewati lalu lanjut ke array selanjutnya,
//    jika angka di array nya lebih besar, akan di swap dengan yg di temporary, dan seterusnya hingga urut
// 
// 2. Selection Sort - Dengan cara meng cek array dengan angka terkecil, angka terkecil tersebut di swap ke array 0 / paling kiri,
//    lalu meng cek array terkecil kedua, lalu di swap ke array 1, dan seterusnya di ulang2 hingga urut
// 
// 3. Dengan Cara jumlah array dikurangi 1 atau n - 1 , misal jumlah array ada 5, jadi step / pass nya 4 kali
// 
//  
// 
// 4. Konversi Algorithma berikut kedalam C++:
//  1.	Repeat steps 2 and 3 varying j from 0 to n – 2
//  2.	Find the minimum value in arr[j] to arr[n – 1]:
//      a. Set min_index = j
//      b. Repeat step c varying i from j + 1 to n – 1
//      c. If arr[i] < arr[min_index] :
//	       i.min_index = i
//	3.	Swap arr[j] with arr[min_index]

//a.Nama variable array diganti menjadi nickname
//b.Panjangnya variable array adalah sebanyak 2 nim belakang
//c.Program bisa input data dan menampilkan data setelah proses sortir.


#include <iostream>
using namespace std;

int hafiz[16];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 16)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 16 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan elemen Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> hafiz[i];
	}
}

void selectionSort() {
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (hafiz[j] < hafiz[min_idx]) {
				min_idx = j;
			}
		}
		swap(hafiz[min_idx], hafiz[i]);
	}
}

void display() {
	cout << endl;
	cout << "====================" << endl;
	cout << "Elemen Array yang telah tersusun" << endl;
	cout << "====================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << hafiz[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
input();
selectionSort();
display();
system("pause");

return 0;
}
