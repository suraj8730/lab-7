//8. Write a C++ program to find sum of digits of a given number using recursion.
#include <iostream>
using namespace std;
int sumdigit(int a)
	{
	if (a==0)//condition for breaking the palindrome
		return 0;
	else
		{
		int A=a%10;//to find all the digits
		a=a/10;//to eliminate the nuber which digitg have been found
		return A+sumdigit(a);//recursion
	}
}
int main(){
	int a;
	cout<<"input a number"<<endl;
	cin>>a;
	sumdigit(a);
	cout<<"sum of all digits of the "<<a<<" number is "<<sumdigit(a)<<endl;
	return 0; 
}
