
#include <iostream>
using namespace std;

int length(char a[]){
	int i;
	for(i=0;i<40;){
	if(a[i] != '\0'){
		++i;
		
	}
	else return i;	
	}
}
char* copy(char a[], char b[]){
	char *p;
	int i;
	for(i=0;i<20;++i){
		b[i]=a[i];
		}
	
	return b;
}
char* cat(char a[],char b[]){
	int l,i;
	l=length(a);
	for(i=0;i<length(b);++i){
		a[l+i]= b[i];
	}
	
	return a;
}
int comp(char a[],char b[]){
	int c =1,i;
	for(i=0;i<30;++i){
		if(a[i] != b[i]){
			c = 0;
			break;
		}
	}
	return c;
}
int Getchar(char a[], char b){
	int i=0;
	for(i=0;i<length(a);++i){
		if(a[i] == b){
			cout<< b << " is at position " << i+1;
			break;
		}
	}return 0;
}

int main(){
	char a[20] = "helloooo";
	char b[20] = "world";
	char c;
	cout<< "enter the character to be found ";
	cin >> c;
	cout << "length of the strings are " << length(a) << length(b) <<endl;
	cout << "the strings after combining are " << cat(a,b) <<endl;
	cout << "comparing the two strings " << comp(a,b) <<endl;
	Getchar(a,c);
	cout<<endl;
	Getchar(b,c);
	cout << "the string after copying are " << copy(a,b) <<endl;
	return 0;
	}
