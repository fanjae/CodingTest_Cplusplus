#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *l_link;
	struct node *r_link;
}node;

node *Root;
void preorder(node *root)
{
	printf("%d\n",root->data);
	if(root->l_link != NULL)
	{
		preorder(root->l_link);
	}
	if(root->r_link != NULL)
	{
		preorder(root->r_link);
	}
}
void postorder(node *root)
{
	if(root->l_link != NULL)
	{
		postorder(root->l_link);
	}
	if(root->r_link != NULL)
	{
		postorder(root->r_link);
	}
	printf("%d\n",root->data);
}
void link(node *root, node *target)
{
	if(root->data > target->data)
	{
		if(root->l_link == NULL)
		{
			root->l_link = target;
			
			return ;	
		}
		else
		{
			link(root->l_link,target);
		}
	}	
	else if(root->data < target->data)
	{
		if(root->r_link == NULL)
		{
			root->r_link = target;
			return ;
		}
		else
		{
			link(root->r_link,target);
		}
	}
	return ;
}
int main(void)
{
	int data;
	bool root_value = false;
	while(scanf("%d",&data) != EOF)
	{
		node *newNode;
		newNode = (node *) malloc(sizeof(node));
		newNode->data = data;
		newNode->l_link = NULL;
		newNode->r_link = NULL;
		if(root_value == false)
		{
			Root = newNode;
			root_value = true;
		}
		else
		{
			link(Root,newNode);
		}
	}
	postorder(Root);
}
	