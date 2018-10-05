//3. Write a C++ program to print all even or odd numbers in given range using recursion.
#include <iostream>
#include<string>
using namespace std;
void printeven(int a, int b)
	{
	if (a==b)//recurtion will stop when the number stop at the given number n
			{
			cout<<endl;
		}
	else
		{
		b++;
		if(b%2==0)
			{
			cout<<b<<" , ";
		}
		printeven(a,b);//recursion of the function
	}
}
void printodd(int a, int b)
	{
	if (a==b)//recurtion will stop when the number stop at the given number n
		cout<<endl;
	else
		{
		b++;
		if(b%2 != 0)
			{
			cout<<b<<" , ";
		}
		printodd(a,b);//recurtion of the function
	}
}
int main(){
	int n;
	int A;
	cout<<"input the number"<<endl;
	cin >>n;
	cout<<"chose a option"<<endl;
	cout<<"1.print all even numbers."<<endl;
	cout<<"2.print all odd numbers."<<endl;
	cin>> A;
	if(A==1)
		printeven(n,0);
	else if(A==2)
		printodd(n,0);
	else
		cout<<"you input an invalid option"<<endl;
	return 0;
}
