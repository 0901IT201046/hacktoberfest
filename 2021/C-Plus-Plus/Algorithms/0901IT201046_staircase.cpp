#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
  cout<<"Enter the Size of StiarCase you want to Create:- ";
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i+j<n+1)
			{
				cout<<" ";
			}
			else
			{
				cout<<"#";
			}
		}
		cout<<"\n";
	}
	return 0;
}
