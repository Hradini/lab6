#include <iostream>
using namespace std;

int main(){
	char str1[10] = "hradini";
	int i;
	char *p;
	p=str1;
	for (i=0;i<10;++i){
		cout<<str1[i];
	}
	cout << endl;
	for (i=0;i<9;++i){
		cout<< *(p+i);
	}
	return 0;
}
