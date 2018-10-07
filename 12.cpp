// C++ program to find LCM of two numbers using recursion.
#include <iostream>
using namespace std;
int hcf(int A,int B)
	{
	if (B==0)//for stopping the recursion
		return A;
	else 
		{
		//taking HCF
		return hcf(B,A%B);//recursion
	}
}
int lcm(int a,int b,int c)
	{
	//LCM = (n1 * n2) / HCF	
	int lcm=(a*b)/c;
	return lcm;
}
int main()
	{
	int a,b,A;
	cout<<"Enter two numbers "<<endl;
	cin>>a;
	cin>>b;
	A=hcf(a,b);
	lcm(a,b,A);
	cout<<"Lcm of "<<a<<" and "<<b<<" is "<<lcm(a,b,A)<<endl;
	return 0;
}
