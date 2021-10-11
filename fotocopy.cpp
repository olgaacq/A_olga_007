#include <iostream>
#include <iostream>
using namespace std;

int main(){

	int pelanggan, banyak_fotokopi, harga, bayar;
	
	cout<< "\t GRAFITY Fotocopy" << endl;
	cout<< "---------------------------------------" << endl;
	
	//menentukan input
	cout<< "Apakah anda pelanggan ? (0=t/1=y) ";
	cin>> pelanggan;
	cout<< endl;
	cout<< "Banyak fotokopi = ";
	cin>> banyak_fotokopi; 
	cout<< endl;
	
		
	if(pelanggan==1){
		harga = 75;
		bayar = banyak_fotokopi*harga;
	}
	else if(pelanggan==0 && banyak_fotokopi<=100){
		harga = 150;
		bayar = banyak_fotokopi*harga;
	}
	else if(pelanggan==0 && banyak_fotokopi<=100 && banyak_fotokopi ==100 && banyak_fotokopi>=100){
		harga = 100;
		bayar = banyak_fotokopi*harga;
	}
	else if(pelanggan==0 && banyak_fotokopi>=200){
		harga = 80;
		bayar = banyak_fotokopi*harga;
	}
	
	//output
	if(pelanggan==0){
		cout<< "Apakah anda pelanggan? = tidak" <<endl;
	}
	else if(pelanggan==1){
		cout<< "Apakah anda pelanggan? = iya" <<endl;
	}
	cout<< "Banyak Fotokopi = "<<banyak_fotokopi<<endl;
	cout<< "Harga per lmvar = "<<harga<<endl;
	cout<< "Yang harus dibyarkan = "<<bayar<<endl;
	
	cout<< "_____________________________________________________" << endl;
	cout<< endl;
	return 0;
	}
	
