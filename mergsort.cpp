#include<iostream>
using namespace std;
void merge(int *arr,int low,int high,int mid)
{
	int i, j, k ,c[50];
	i=low;
	k=low;
	j=mid+1;
	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			c[k]=arr[i];
			k++;
			i++;
		}
		else
		{
			c[k]=arr[j];
			k++;
			j++;
		}
		
	}
	while(i<=mid)
	{
    	c[k]=arr[i]	;
    	k++;
    	i++;
	}
	while(j<=high)
	{
		c[k]=arr[j];
		k++;
		j++;
	}
	for(i=low;i<k;i++)
	{
		arr[i]=c[i];
	}
}
void mergsort(int *arr,int low ,int high)
{
  if(low<high)
  
  	int mid=(low+high)/2;
  	mergsort(arr,low,mid);
  	mergsort(arr,mid+1,high);
    merge(arr,low,high,mid);
  }
  return;
}
int main()
{
	int arr[30];
	int i;
	int b[30];
	cout<<"Enter the number of elements;"<<endl;
	for(i=0;i<=4;i++)
	{
		cin>>arr[i];
	}
	mergsort(arr, 0, 4);
	cout<<"sorted array\n";
	for(i=0;i<5;i++)
    {
	    cout<<arr[i]<<"\t";
	}	
	return 0;
}
