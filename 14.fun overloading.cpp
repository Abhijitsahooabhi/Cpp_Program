#include<iostream>
using namespace std;
class overload{
	public:
		float area(float r){
	return 3.14*r*r;
}
	float area(float h,float b){
	return 0.5*h*b;
}
int area(int l,int b){
	return l*b;
}
};
int main(){
overload c;
float a,b;
cout<<"Enter two Number:";
cin>>a>>b;
cout<<"Area of Circle is:"<<c.area(float(a))<<endl;
cout<<"Area of Triangle is:"<<c.area(a,b)<<endl;
cout<<"Area of Rectangle is:"<<c.area(int(a),int(b));
}
