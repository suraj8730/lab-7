#include <bits/stdc++.h> 
  
using namespace std; 
  
// function to find sum of 
// first n even numbers 
int evenSum(int n) 
{ 
    int curr = 2, sum = 0; 
  
    // sum of first n even numbers 
    for (int i = 1; i <= n; i++) { 
        sum += curr; 
  
        // next even number 
        curr += 2; 
    } 
  
    // required sum 
    return sum; 
} 
  
// Driver program to test above 
int main() 
{ 
    int n = 20; 
    cout << "Sum of first " << n 
         << " Even numbers is: " << evenSum(n); 
    return 0; 
} 
