#include<iostream>
using namespace std;
struct node
{
	int value;
	node*left;
	node*right;
	node(int x)
	{
		value=x;
		left=0;
		right=0;
	}
};
class BT
{
	private:
		node*root;
	public:
		BT()
		{
			root=0;
		}
		void populate()
		{
			root=new node(5);
			root->left=new node(4);
			root->right=new node(3);
			(root->left)->left=new node(8);
			(root->left)->right=new node(10);
			(root->right)->left=new node(14);
			(root->right)->right=new node(17);
		}
		void inorder_traversal()
		{
			inorder(root);
		}
        void inorder(node*ptr)
        {
        	if(ptr!=0)
        	{
        		inorder(ptr->left);
        		cout<<ptr->value<<" "<<endl;
        		inorder(ptr->right);
			}
		}
		void preorder_traversal()
		{
			preorder(root);
		}
        void preorder(node*ptr)
        {
        	if(ptr!=0)
        	{
        		cout<<ptr->value<<" "<<endl;
        		preorder(ptr->left);
        		preorder(ptr->right);
			}
		}
		void postorder_traversal()
		{
			postorder(root);
		}
        void postorder(node*ptr)
        {
        	if(ptr!=0)
        	{
        		postorder(ptr->left);
        		postorder(ptr->right);
        		cout<<ptr->value<<" "<<endl;
			}
		}
		int insertion(int value)
		{
			 (root->left->right)->left=new node(value);
			 return value;
			 cout<<value<<endl;	
		}
};
//struct node* insert(struct node*root,int data)
//{
//	if(root=0)
//	{
//		return new node(data);
//	}
//	else if(data < 10)
//	{
//		root->right=insert(root->right,data);
//	}
//	return root;
//}
int main()
{
	BT t1;
	t1.populate();
	cout<<"inorder_traversal"<<endl;
	t1.inorder_traversal();
	cout<<"pre order_traversal"<<endl;
	t1.preorder_traversal();
	cout<<"post order_traversal"<<endl;
	t1.postorder_traversal();
	t1.insertion(19);
}
