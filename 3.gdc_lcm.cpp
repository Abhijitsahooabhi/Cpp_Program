#include<iostream>
using namespace std;
int main(){
	int no1,no2,num,den,rem,lcm,gcd;
	cout<<"Enter two number:";
	cin>>no1>>no2;
	if(no1>no2)
	{
		num=no1;
		den=no2;
	}
	else
	{
		num=no2;
		den=no1;
	}
	rem=num%den;
	while(rem>0){
		num=den;
		den=rem;
		rem=num%den;
	}
	gcd=den;
	lcm=(no1*no2)/gcd;
	cout<<"\n GCD of "<<no1<<" & "<<no2<<" is="<<gcd;
	cout<<"\n LCM of "<<no1<<" & "<<no2<<" is="<<lcm;
}
