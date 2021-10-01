#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	for(int i =0; i < 80; i++)
	{
		cout<< "=";
	}
	cout<< "\t\tKalkukator" << endl;
	for(int i =0; i < 80; i++)
	{
		cout<< "=";
	}
	
	
	cout<< endl;
	
	float a,b,hasil;
	char op;
	
	
	cout<< "masukkan angka pertama = ";
	cin>> a;
	cout<< "masukkan operator = ";
	cin>> op;
	cout<< "masukkan angka kedua = ";
	cin>> b;
	
	if(op == '+'){
		hasil = a+b; 
	}else if(op == '-'){
		hasil = a-b;
	}else if(op == '*'){
		hasil = a*b;
	}else if(op == '/'){
		hasil = a/b;
	}else if(op == '%'){
		hasil = a%b;
	}else{
	}cout<< "Yang Anda Masukkan Bukan Operator Logika ! " << endl;

	
	cout<< "Hasil Dari " << a << " " << op << " " << b << " Adalah " << hasil;
	
	
	return 0;
}
