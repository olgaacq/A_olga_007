#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char op;
	int a, b;
	
	cout<< "Enter any two number : ";
	cin>> a;
	cin>> b;
	cout<< endl;
	
	
	cout<< "Enter the operator (+,-,*,/) : ";
	cin>> op;
	cout<< endl;
	
	
	switch(op){
		case '+' :
			cout<< "The calculated result is : " << a + b;
			break;
			
		case '-' :
			cout<< "The calculated result is : " << a + b;
			break;
		
		case '*' :
			cout<< "The calculated result is : " << a + b;
			break;
			
		case '/' :
			cout<< "The calculatd result is : " << a + b;
			break;
				
	}
	cout<< " " << endl;
	
	return 0;
}
