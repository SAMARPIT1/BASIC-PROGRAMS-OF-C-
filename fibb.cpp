#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==1||n==0)
	{
	
	return (n);
}
	
else 
   {
   
   return (fib(n-1)+fib(n-2));
}
   
}
int main()
{
	 int n,i,x;
	 cout<<"enter"<<endl;
	 cin>>n;
	 cout<<"fib sereies";
	 while(i<n)
	 {
	 	x=fib(i);
	 	i++;
	 	  
	 }
	 if(i==n)
	 	cout<<" "<<x<<endl;
}
