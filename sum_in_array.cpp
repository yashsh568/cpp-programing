using namespace std;
#include<bits/stdc++.h>
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; ++i)
	{
		cin>>a[i];
	}
	int sum=0;
	for(int i=0; i<n; ++i)
    {
        sum=sum + a[i];
    }
    cout<<sum;
}
