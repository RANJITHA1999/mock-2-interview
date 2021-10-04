#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"matrix_create.h"
#include"string_compare.h"
#include"tree_2.h"

struct test
{
	int arr[4][3][2];
}vars;

node *root=NULL;

/*
void create_tree(int ele)
{
	node *ptr=(node*)malloc(sizeof(node));
	ptr->data=ele;
	ptr->left=NULL;
	ptr->right=NULL;
	if(root==NULL)
	{
		root=ptr;
	}
	else
	{
		node *t1=root,*t2;
		while(t1!=NULL)
		{
			if(ptr->data>t1->data)
			{
				t2=t1;
				t1=t1->right;
			}
			else if(ptr->data<t1->data)
			{
				t2=t1;
				t1=t1->left;
			}
		}
		if(ptr->data>t2->data)
		{
			t2->right=ptr;
		}
		else
		{
			t2->left=ptr;
		}
	}
		
}
void inorder(node *temp)
{
	if(temp==NULL)
	return;
	inorder(temp->left);
	printf("%d\n",temp->data);
	inorder(temp->right);
}
void preorder(node *temp)
{
	if(temp==NULL)
	return;
	printf("%d\n",temp->data);
	preorder(temp->left);
	preorder(temp->right);		
}
void postorder(node *temp)
{
	if(temp==NULL)
	return;
	postorder(temp->left);
	postorder(temp->right);
	printf("%d\n",temp->data);	
}
*/	
int main()
{
	create();
	int i,j,k,m;
	int (*p)[3][2]=vars.arr;
	int n=*(*(*(p+2)+2)+2);
	if(n%10==0)
	goto pattern;
	pattern: 
	for( i=5;i>0;i--)
		 {
		 	for(m=0;m<i-1;m++)
			
		 	printf(" ");
		 	  k=0;
		 	for(j=5;j>=i;j--)
		 	{    
		 	
		 		printf("%c",'a'+k);
		 		k++;
		 	
		 	}
		 	printf("\n");
		 }
    return 0;
}

		 
	if(n%2==0)
	{	 
		
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		create_tree(rand());
		printf("inorder\n");
		inorder(root);
		printf("preorder\n");
		preorder(root);
		printf("postorder\n");
		postorder(root);
	}
	else
	{
		
		str_cmp();
		
	}
			
}


