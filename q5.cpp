#include <iostream>
using namespace std;

int main(){
	char str[20], *p;
	cout << "enter about 10 characters of a string";
	cin >> str;
	int i,j;
	p=str;
	for(i=0;i<20;++i){
		for(j=i;j<20;++j){
			cout<< *(p+j);
		} cout << endl;
	}return 0;
}
