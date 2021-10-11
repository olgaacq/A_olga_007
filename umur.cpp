#include <iostream>
using namespace std;

int main(){
	int umur;
	char x;
	
	cout<< "Menentukan Kategori Umur" << endl;
	cout<< "==================================" << endl;
	
	do{
		cout<< "Masukkan Umur = ";
		cin>> umur;
		cout<< endl;
		
		if(umur >= 60 & umur <= 100){
			cout<< "Termasuk dalam kategori Lansia" <<endl;
		}else if(umur >= 30){
			cout<< "Termasuk dalam kategori Dewasa" <<endl;
		}else if(umur >= 17){
			cout<< "Termasuk dalam kategori Pemuda" <<endl;
		}else if(umur >= 12){
			cout<< "Termasuk dalam kategori Remaja" <<endl;
		}else if(umur >= 5){
			cout<< "Termasuk dalam kategori Anak-anak" <<endl;
		}else if(umur >= 3){
			cout<< "Termasuk dalam kategori Balita"<<endl;
		}else {
			cout<< "Termasuk dalam kategori Bayi" <<endl;
		}
		cout<< endl;
		
		cout<< "LAGI ? [Y/T] = ";
		cin>> x;
		cout<< endl;
	}while (x == 'y' || x == 'Y');
	cout<< "exit"<< endl;
	cout<< endl;
	
	return 0;
}
