#include<iostream> 
#include<iomanip>
using namespace std;
//a function to 2print the adjacent matrix.
void printMat(int mat[][10],int n )
{
	int i,j;
	cout<<"\n\n"<<setw(4)<<" ";
	for(i=0;i<n;i++)
		cout<<setw(3)<<"("<<i+1<<")";
		cout<<"\n\n";
	//print 1 if the corresponding vertexes are connected otherwise 0.
	for(i=0;i<n;i++)
	{
		cout<<setw(3)<<"("<<i+1<<")";
		for(j=0;j<n;j++)
		{
			cout<<setw(4)<<mat[i][j];
		}
		cout<<"\n\n";
	}
}
int main()
{
	int i,j,v;
	cout<<"Enter the value of vertexes"<<endl;
	cin>>v;
	int mat[10][10];
	cout<<"\n";
	//take input of the adjanceny of each pair of vertics.
	for(i=0;i<v;i++)
	{
		for(j=i;j<v;j++)
		{
			if(i!=j)
			{
				cout<<"Enter 1 if vertexes"<<i+1<<"is adjacent to "<<j+1<<" ,otherwise 0:"<<endl;
				cin>>mat[i][j];
				mat[j][i]=mat[i][j];
			}
			else
			{
			     mat[i][j]=0;
			}
		}
	}
	printMat(mat,v);
	return 0;
}

