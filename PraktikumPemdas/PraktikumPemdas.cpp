#include <iostream>
using namespace std;

struct mahasiswa {
	string nim;
	string nama;
	string alamat;
	string umur;
};

int main() {
	mahasiswa  mhs;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa :";
	cin >> mhs.nama;
	cout << "Alamat mahasiswa : ";
	cin >> mhs.alamat;
	cout << "Umur mahasiswa : ";
	cin >> mhs.umur;
