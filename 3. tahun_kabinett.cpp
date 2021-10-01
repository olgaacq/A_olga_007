#include <iostream>
using namespace std;

int main(){
	int tahun;
	char x;
	
	do{
		cout<< "Masukkan Tahun = ";
		cin>> tahun;
		cout<< endl;
		
		if(tahun%4 == 0){
			cout<<"Tahun Kabisat"<< endl;
		}else {
			cout<< "Bukan Tahun Kabisat" << endl;
		}
	cout<< " "<< endl;
	cout<< "Lagi ? [Y/T] = "; cin>> x;
	cout<< endl;
	} while (x == 'y' || x == 'Y');
	cout<< "exit!"<< endl;
	cout<<" " << endl;
	
	return 0;
	
}
