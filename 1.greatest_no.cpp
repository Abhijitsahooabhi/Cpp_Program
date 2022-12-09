#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter 3 No=";
	cin>>a>>b>>c;
	if(a>b || c>b){
		if(a>c){
			cout<<"greatest No is ="<<a;
		}
		else{
			cout<<"greatest No is ="<<c;
		}
	}
	else{
		cout<<"greatest No is ="<<b;
	}
}
