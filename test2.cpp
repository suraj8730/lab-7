#include <iostream>
using namespace std;
//for adding odd or even we have to add the number and the next number untill it reaches the input nubber n
int sumeven(int a, int b)
	{
	if (b==a)//recursion will stop when the number stop at the given number n+1
		return 0;
	else
		{
			int sum=b++;
			if(b%2==0)
			return	sum+sumeven(a,b);//recursion for  adding the even numbers
	}
}
int main(){
	int n,A;
	cout<<"Input a natural number"<<endl;
	cin>>n;
	sumeven(n,0);
	cout<<"sum of all even  natrural number from 1 to "<<n<<" is "<<sumeven(n,0)<<endl;
	return 0;
}
