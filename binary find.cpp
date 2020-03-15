#include<iostream>
using namespace std;
bool binfind(int v,int *arr,int size)
 {
    int lower;
    int upper;
    lower=0;
   	upper=size-1;
   	int m;
   	while(lower<=upper)
  	{
	    m=(lower+upper)/2;
	   	if(arr[m]==v)
    	{
		    return true;
	  	}
		if(v>arr[m])
		{
			lower=m+1;
		}
       if(v<arr[m])
		{
		    upper=m-1;	
    	}	
	}
	return false;
 }
int main()
{
	int size=10;
	int arr[size];
	for(int i=0;i<10;i++)
	{
        cin>>arr[i];
	}
	cout<<"enter the exist number"<<endl;
	int v;
	cin>>v;
	if(binfind(v,arr,size))
	{
		cout<<"exist"<<endl;
	}
	else
	{
		cout<<"do not exist"<<endl;
	}
	return 0;
}
