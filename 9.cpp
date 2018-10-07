//9. Write a C++ program to find factorial of any number using recursion.
#include <iostream>
using namespace std;
long long int factorial(int a)
	{
	if(a==0)//condition for breaking the loop of recursion
		return 1;
	else
		{
		//for factorial we need to multipy a number with its predesesor till it reasces 1
		int A=a;//
		a=a-1;//to reduce the number
		return A*factorial(a);//recursion
	}
}
int main(){
	int a;
	cout<<"Enter a number which factorial you want to find"<<endl;
	cin>>a;
	factorial(a);
	cout<<a<<" factorial is "<<factorial(a)<<endl; 
	return 0;
}
