// Write a C++ program to find power of any number using recursion.
#include <iostream>
using namespace std;
//power of a number implies base is multiplied to itself for n many times
long int power(int a,int b,long int A)
	{
	if(A==b)//for b many times it is multiplied
		return 1;
	else
		{
		A++;
		return a*power(a,b,A);//recuring function so that it can multiply t itself
	}
}
int main()
	{
	int a,b;
	cout<<"Input a number"<<endl;
	cin>>a;
	cout<<"input power of the number"<<endl;
	cin>>b;
	power(a,b,0);
	cout<<a<<" to the power "<<b<<" is "<<power(a,b,0)<<endl;
	return 0;
}
