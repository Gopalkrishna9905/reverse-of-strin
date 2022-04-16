#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	 char str[30];
	 int start=0;
	  int end=0;
	 
	  
	 cout<<" enter string to reversed : ";
	 cin>>str; 
	  end = strlen(str)-1;

	while(start<end)
	{
		int temp = str[end];
		str[end]= str[start];
		str[start]=temp;
		start++;
		end--;
		
	}
	
	cout<<" after reverse string is "<<str<<" ";
}



