#include <iostream>
using namespace std;

int main(){
	int arr[10];
	int i=0;
	
	for(i=0;i<10;++i){
		arr[i]=i+1;
	}
	for(i=0;i<10;++i){
		cout<< arr[i];
	}
	cout <<endl;
	int *p;
	p = arr;
	for (i=0;i<10;++i){
		cout<< *(p+i);
	}
	return 0;
}
