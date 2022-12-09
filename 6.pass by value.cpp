#include<iostream>
using namespace std;
void swap(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"After swap"<<endl;
	cout<< "a="<<x<<endl;
	cout<<"b="<<y<<endl;
}
int main(){
	int a,b;
	cout<<"Enter two Numbers=";
	cin>>a>>b;
	swap(a,b);
}
