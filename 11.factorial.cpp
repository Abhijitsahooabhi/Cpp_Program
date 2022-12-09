#include<iostream>
using namespace std;
int main(){
	int x,f=1;
	cout<<"Enter a Number:";
	cin>>x;
	for(int i=1;i<=x;i++){
		f=1;
		for(int j=i;j>0;j--)
		{
			f=f*j;
		}
	}
	cout<<"factorial of "<<x<<"! ="<<f;
}
