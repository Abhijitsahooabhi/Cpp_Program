#include<iostream>
using namespace std;
int main(){
int x,f=1,sum=0;
cout<<"Enter a numbers:";
cin>>x;
for (int i=1;i<=x;i++){
	f=1;
	for(int j=i;j>0;j--){
	f=f*j;
	}
	sum=sum+f;
}
cout<<"factorial of Entered No:"<<f<<endl;
cout<<"Sum is="<<sum;
}
