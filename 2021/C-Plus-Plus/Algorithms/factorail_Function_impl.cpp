#include<iostream>

using namespace std;

int factorial(int n)    
{    
if(n<0)    
return(-1); /*Wrong value*/      
if(n==0)    
return(1);  /*Terminating condition*/    
else    
{    
return(n*factorial(n-1));        
}    
}

int main()
{
	int n;
	cout<<"Enter the Number, that you want to find factorial of:- ";
	cin>>n;
	cout<<factorial(n);

	return 0;
}
