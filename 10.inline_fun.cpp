#include<iostream>
using namespace std;
inline int fun(int a){
	return a*a*a;
}
int main(){
	int n;
	cout<<"Enter NO:";
	cin>>n;
	fun(n);
	cout<<"Square of a number="<<fun(n)/n<<endl;
	cout<<"cube of a number="<<fun(n);
}

