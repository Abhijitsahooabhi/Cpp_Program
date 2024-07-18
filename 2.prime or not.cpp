#include<iostream>
using namespace std;
int main(){
	int no,c=0,i;
	cout<<"Enter a number:";
	cin>>no;
	for(i=1;i<=no;i++){
		if(no%i==0)
		c++;
	}
		if(c==2){
		cout<<"\nPrime No.";
		}
		else 
		{
			cout<<"\nNot Prime No.";
		}
}
