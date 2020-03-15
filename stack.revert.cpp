#include<iostream>
using namespace std;
#define size 5
class stack{
	private:
    	int *arr;
    	int capacity;
     	int top;
    public:
    	stack()
		{
		capacity=size;
		arr=new int[capacity];
		top=-1;
		}
		bool isfull()
		{
			if(top+1==capacity)
			{
		    	return true;
		    }
		    else
		    {
		    	return false;
			}
		}
		bool isempty()
		{
			if(top==-1){
				return true;
			}
			else{
				return false;
			}
		}
		bool push(int x) 
       { 
           if (top>size-1)
		    { 
              cout << "Stack Overflow"; 
              return false; 
            } 
           else
		    { 
             ;  arr[++top]=x; 
               cout << x << " pushed into stack\n"; 
               return true; 
            } 
        }
       	bool pop(int &x)
    	{
	       if(isempty())
	    	{
		    	return false;
	    	}
	    	else
	     	{
		        x=arr[top--];
		    	return true;
	    	}
     	}
    };
int main()
{ 
 stack s;
 stack s1;
 stack s2;
 s2.push(1);
 s2.push(3);
 s2.push(7);
 s2.push(4);
int x=0;
 while(x<size-1)
 {  
    cin>>x;
    s.push(x);
}
while(!s.isempty())
{
	s.pop(x);
	s1.push(x);
}
return 0;
}
 
