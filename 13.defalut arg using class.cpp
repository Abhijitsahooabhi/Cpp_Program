#include<iostream>
using namespace std;
class pass{
	public:
	int sum(int a=1,int b=2,int c=3,int d=4);
};
int pass::sum(int a,int b,int c,int d){
	cout<<"sum of "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<a+b+c+d<<endl;
}
int main(){
	int p,q,w,x;
	cout<<	"Enter 4 No:";
	cin>>p>>q>>w>>x;
	pass p1;
	cout<<"Default value was 1,2,3,4 respectively."<<endl;	
	p1.sum();
	p1.sum(p);
	p1.sum(p,q);
	p1.sum(p,q,w);
	p1.sum(p,q,w,x);
}
