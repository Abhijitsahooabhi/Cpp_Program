#include<iostream>
using namespace std;
int pass(int a=1,int b=2,int c=3,int d=4){
	return (a+b+c+d);
} 
int main(){
	int p,q,w,x;
	cout<<	"Enter 4 No:";
	cin>>p>>q>>w>>x;
	int p1,p2,p3,p4,p5;
	p1=pass();
	p2=pass(p);
	p3=pass(p,q);
	p4=pass(p,q,w);
	p5=pass(p,q,w,x);
	cout<<"Default value was 1,2,3,4 respectively."<<endl;
	cout<<"Answers:"<<endl;
	cout<<p1<<endl;	
	cout<<p2<<endl;
	cout<<p3<<endl;
	cout<<p4<<endl;
	cout<<p5<<endl;	
}
