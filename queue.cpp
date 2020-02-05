#include<iostream>
using namespace std;
#define SIZE 10;
class queue
{
    private:
     	int *arr;
     	int front;
     	int rear;
    	int capacity;//size
    	int noe;
    public:
    	queue(int size)
		{
			capacity=size;
	    	arr=new int[capacity];
	    	rear=-1;
	    	front=-1;
	    	noe=0;
     	}
    	bool isFull()
    	{
	    	if(noe==capacity)
	    	{
		    	return true;
	     	}
	    	else
			{
		    	return false;
	    	}
     	}
     	bool isEmpty()
    	{
	    	if(noe==0)
			{
		    	return true;
	    	}
	    	else
			{
		    	return false;
	     	}
    	}
     	void enque(int x)
    	{
	    	if(!isFull())
	    	{
		    	noe++;
		    	arr[(++front)%capacity]=x;
		    	cout<< x<<" enque "<<endl;
     		}
    	}
    	int deque()
    	{
     		if(!isEmpty())
		   {
	        	noe--;
	        	int x=arr[(++rear)%capacity];
	        	cout<<x<<" dequeue"<<endl;
	     	}
    	}
     	void print()
    	{
	    	for(int i=(rear+1);i<=front;i++)
	     	{
		    	cout<<arr[i%capacity]<<endl;	
	     	}
     	}
 };
int main()
{
	queue q1(7);
	q1.enque(3);
	q1.enque(4);
	q1.enque(5);
	q1.enque(6);
	q1.enque(1);  
	q1.enque(2);
	q1.enque(3);
	q1.deque();
	q1.deque();
	q1.deque();
	return 0;	
}
