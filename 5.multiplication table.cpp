#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter a numbers:";
cin>>x;
for (int i=1;i<=x;i++){
	for(int j=1;j<=10;j++){
		cout<<i<<"*"<<j<<"="<<i*j<<"	";
	}
	cout<<endl;
}
}
