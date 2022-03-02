#include <iostream>

using namespace std;

int main(){

	// deklarasi
	int jum_data;	// banyaknya data
	bool ketemu = false;	// untuk searching
	int cari;	// key untuk searching

	// mengambil inputan dari users
	cout << "Jumlah Data : "; cin >> jum_data;
	int data[jum_data];	// menampung inputan data dengan array
	
	for(int index = 0; index < jum_data; index++){	// melakukan perulangan sebanyak jumlah data
		cout << "index ke- " << index << " : ";	//memasukkan data ke-array 
		cin >> data[index];
	} 
	cout << endl;

	// menampilkan data yang di-input users
	cout << "Data Pada Array" << endl;
	cout << "index ->\t";
	for(int index = 0; index < jum_data; index++){
		cout << index << " ";
	}
	cout << endl;
	cout << "value ->\t";
	for(int index = 0; index < jum_data; index++){
		cout << data[index] << " ";
	}
	cout << endl << endl;

	// mengambil key dari user
	cout << "Angka yang dicari : "; cin >> cari;

	// proses searching dengan metode sequential atau linear
	while(!ketemu){
		for(int index = 0; index < jum_data; index++){	// memeriksa seluruh data pada array
			if(data[index] == cari){	// menyeleksi data yang dicari
				cout << "Angka "<< cari << " ditemukan !!!" << endl;
				ketemu = true;
			}
		}
		if(ketemu != true){	// menampilkan message apabila data tidak ditemukan
			cout << "Angka "<< cari << " tidak ditemukan !!!" << endl;
			break;	// control flow untuk keluar dari while loop
		}
	}

	return 0;
}