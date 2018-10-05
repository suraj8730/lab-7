//2. Write a C++ program to print all natural numbers between 1 to n using recursion.
#include <iostream>
using namespace std;
//to print all number we have to go from 1 to that number
void ton(int a, int b)
	{
	if (a==b)//recurtion will stop when the number stop at the given number n
		cout<<endl;
	else
		{
		b++;
		cout<<b<<" , ";
		ton(a,b);//recurtion of the function
	}
}
int main(){
	int n;
	cout<<"Type a number ."<<endl;
	cin>>n;
	ton(n,0);
	return 0;
}
