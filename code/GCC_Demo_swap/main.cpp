#include <iostream>

void swap(int &a, int &b);

int main(){
	double d=0.1;
	int x=5,y=10;
	std::cout<<"Before swap: x="<< x <<" , y="<< y <<std::endl;
	swap(x,y);
	std::cout<<"After swap: x="<< x <<" , y= "<< y <<std::endl;
	return 0;
}
