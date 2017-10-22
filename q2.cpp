#include<iostream>
using namespace std;

int main(){
	int a,b;
	int *p;
	cin >> a;
	p=&a;
	b = *p;
	cout <<"a " << a<< " b " << b<< " p " << *p;
	
	a=2; b=3;
	cout <<"a " << a<< " b " << b<< " p " << *p;
	
	p=&b;
	cout <<"a " << a<< " b " << b<< " p " << *p;
	
	return 0;
	
	
}
