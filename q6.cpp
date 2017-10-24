#include <iostream>
using namespace std;
int main(){
	char str[20], *p;
	cout << "enter about 10 characters of a string";
	cin >> str;
	int i,j;
	p=str;
	int n;
	for(i=20;i>=0;--i){
		if(str[i]== '\0'){
			n=i;
		}
	}
	cout << n;
	for(i=0;i<n+1;++i){
		for(j=n-i;j<n+1;++j){
			cout<<*(p+j);
		}cout <<endl;
	}
	return 0;
}
