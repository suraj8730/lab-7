//7. Write a C++ program to check whether a number is palindrome or not using recursion.
#include <iostream>
using namespace std;
int reverse(int a,int b)
	{
	if (a==0)//condition for breaking the palindrome
		return b;
	else
		{
		//programe for reversing a number
		int A=a%10;
		b=b*10+A;
		a=a/10;
		return reverse(a,b);//recursion
	}
}
int main(){
	int a;
	cout<<"input a number"<<endl;
	cin>>a;
	reverse(a,0);
	cout<<"the reverse of the number is "<<reverse(a,0)<<endl;
	//now condition for pallindrome 
	if(a==reverse(a,0))
		{
		cout<<"The input number is a palindrome"<<endl;
	}
	else
		cout<<"The input number is not a palindrome"<<endl;
	return 0;
}
