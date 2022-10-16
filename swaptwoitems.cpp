#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a , b, temp ;
	cout<<"enter the two variables by order : "<<endl;
	cin>>a>>b;
	cout<<"Before Swapping"<<endl;
	cout <<"a = "<<a<<endl<<"b = "<<b<<endl;
	temp = a;
	a = b;
	b = temp;
	cout<<"After Swapping"<<endl;
	cout <<"a = "<<a<<endl<<"b = "<<b;
	return 0;
}