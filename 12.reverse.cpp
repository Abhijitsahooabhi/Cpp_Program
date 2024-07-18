#include<iostream>
using namespace std;
class reverse{
	int a;
	public:
		void input(){
			cout<<"Enter a No:";
			cin>>a;
		}
		void show(){
				int rev=0;
			while(a>0){
			rev= (rev*10)+(a%10);
			a/=10;
		}
			cout<<"Reverse No:"<<rev;
		}
};
int main(){
	reverse r;
	r.input();
	r.show();
}
