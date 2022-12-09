#include<iostream>
using namespace std;
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a,b;
	cout<<"Enter two Numbers=";
	cin>>a>>b;
	cout<<"\nbefore swap \na="<<a<<"\nb="<<b;
	swap(&a,&b);
	cout<<"\nAfter swap \na="<<a<<"\nb="<<b;
}
