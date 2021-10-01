#include <iostream>
using namespace std;

int main(){
	string nama;
	char golongan;
	int jam_kerja, upah, total_upah;
	
	cout<< "\t Menghitung Gaji Karyawan" << endl;
	cout<< "========================================" << endl;
	
	//menentukan input
	cout<< "Nama = "; getline(cin, nama);
	cout<< endl;
	cout<< "Golongan = "; 
	cin>> golongan;
	cout<< endl;
	cout<< " Jumlah jam kerja = "; 
	cin>> jam_kerja;
	
	//menentukan golongan upah
	switch(golongan){
		case 'A' : upah = 5000;
		break;
		case 'B' : upah = 7000;
		break;
		case 'C' : upah = 8000;
		break;
		case 'D' : upah = 10000;
		break;
	}
	
	total_upah = jam_kerja * upah;
	
	if ( (jam_kerja - 48) > 0 ){
		total_upah = total_upah + ( (jam_kerja - 48) * 4000);
	}
	
	//output
	cout<< endl;
	cout<< nama << "Menerima Upah Rp. " << total_upah << "per minggu";
	cout<< endl;
	
	return 0;
	
}
