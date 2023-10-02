using namespace std;
#include<iostream>
int main()
{
int num, x = 0;
//int sum = 0;
int mod;
cout << "Enter a number:";    
cin >> num;
int n = num;
while(num>0)
{  
mod = num%10;  // 123
x = x * 10 + mod;  // 0+10+3
num = num/10;  //123/10
}  
if(n==x)
cout << x << " is a PALINDROME number.";  
else
cout << x << " is not a PALINDROME number.";  
return 0;
}