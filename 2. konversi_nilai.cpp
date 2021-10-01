#include <iostream>
using namespace std;

int main(){
	int nilai;
	char x;
	
	do{
		cout<< "Masukkan Nilai = ";
		cin>> nilai;
		cout<< endl;
		
		if(nilai >= 80 & nilai <= 100){
			cout<< "Nilai A" << endl;
		}else if(nilai >= 65){
			cout<< "Nilai B" << endl;
		}else if(nilai >= 50){
			cout<< "Nilai C" << endl;
		}else if(nilai >= 35){
			cout<< "Nilai D" << endl;
		}else {
			cout<< "Nilai E" << endl;
		}
		cout<< endl;
		
		cout<< "Lagi ? [Y/T] = "; 
		cin>> x;
		cout<< endl;
	}while (x == 'y' || x == 'Y');
	cout<< "exit"<< endl;
	cout<< endl;
	
	return 0;
	
}
