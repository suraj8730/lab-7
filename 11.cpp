//11. Write a C++ program to find GCD (HCF) of two numbers using recursion.
#include <iostream>
using namespace std;
int hcf(int A,int B)
	{
	if (B==0)//for stopping the recursion
		return A;
	else 
		{
		return hcf(B,A%B);//recursion
	}
}
int main()
	{
	int a,b;
	cout<<"Enter two numbers "<<endl;
	cin>>a;
	cin>>b;
	hcf(a,b);
	cout << "H.C.F of "<<a<<" and "<<b<<" is "<< hcf(a,b)<<endl;
	return 0;
}

