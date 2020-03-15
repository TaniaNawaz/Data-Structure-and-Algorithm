#include<iostream>
using namespace std;
#define size 10
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
			if(top==-1)
			{
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
                arr[++top] = x; 
                cout << x << " pushed into stack\n";                 
                return true; 
            } 
        }
        bool pop(char &x)
    	{
	       if(isempty())
	    	{
		    	return false;
	    	}
	    	else
	     	{
		        x=arr[top--];
		        cout << x <<" pop successfull\n ";
		    	return true;
	    	}
    	}
		int peek(int x)
		{
			if(top<0)
			{
				cout<<"stack is empty"<<endl;
				return 0;
			}
			else{
				 x=arr[top];
				return x;
			}
		}
	};
int main() 
{ 
 stack s;
 string s1;
 cin>>s1;
 int i;
 char a;
 cin>>a;
 for(i=0;i<size;++i)
 {
   if(s1[i]=='['|| s1[i]=='{'||s1[i]=='(')
   {
   	s.push(s1[i]);
   	cout<<s1[i]<<endl; 
   }
   else if(s1[i]==']'||s1[i]=='}'||s1[i]==')')
   {
     s.peek(s1[i]);
   }
}
   return 0;
}

  

