//4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
#include <iostream>
using namespace std;
//add a number with its next number 
int addnatural(int a,int b)
	{
	if(b==a+1)//we have to add the number untill the number reaches
		return 0;
	else
		{
		int sum=b++;
		return sum+addnatural(a,b);//recursion for addition to the next number
	}
}
int main(){
int n;
cout<<"Input a natural number"<<endl;
cin>>n;
addnatural(n,0);
cout<<"sum of all natrural number from 1 to "<<n<<" is "<<addnatural(n,0)<<endl;
return 0;
}
