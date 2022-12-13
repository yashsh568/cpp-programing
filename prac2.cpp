#include<iostream>
using namespace std;
int main()
{
	int n, a=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a=a+1;
			cout<<a<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//quadratric time complexity is nXn that is n square
