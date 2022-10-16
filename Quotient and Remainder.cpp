#include<iostream>
using namespace std;
int main()
{
	int x , y , quotient , remainder;
	cout<<"Enter the two number by the order"<<endl;
	cin >>x>>y;
	quotient = x / y;
	remainder = x % y ;
	cout<<"quotient = "<<quotient<<" , remainder = "<<remainder;
}