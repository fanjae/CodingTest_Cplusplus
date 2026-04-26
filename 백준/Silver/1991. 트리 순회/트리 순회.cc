#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	char node;
	struct node *left;
	struct node *right;
}node;
node *Root;
node *Pointer;
node *Node;
void preorder(node *root)
{
	if(root == NULL)
	{
		return ;
	}
	else
	{
		printf("%c",root->node);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node *root)
{
	if(root == NULL)
	{
		return ;
	}
	else
	{
		inorder(root->left);
		printf("%c",root->node);
		inorder(root->right);
	}
}
void postorder(node *root)
{
	if(root == NULL)
	{
		return ;
	}
	else
	{
		postorder(root->left);
		postorder(root->right);
		printf("%c",root->node);
	}
}
int find_key = 0;
void find_pointer(node *root, char target)
{
	if(root == NULL)
	{
		return ;
	}
	else if(root->node != target && find_key == 0)
	{
		find_pointer(root->left,target);
		find_pointer(root->right,target);
	}
	else if(find_key == 0 && root->node == target)
	{
		find_key = 1;
		Pointer = root;
		return ;
	}
	else if(find_key == 1)
	{
		return ;
	}
}
int main(void)
{
	int n;
	scanf("%d\n",&n);
	for(int i=1; i<=n; i++)
	{
		char target_node,left_node,right_node;
		scanf("%c",&target_node);
		getchar();
		scanf("%c",&left_node);
		getchar();
		scanf("%c",&right_node);
		getchar();
		if(target_node == 'A')
		{	
			Node = (node *)malloc(sizeof(node));
			Node->node = target_node;
			Node->left = NULL;
			Node->right = NULL;
			Root = Node;
			Pointer = Node;
			
			if(left_node != '.')
			{
				Node = (node *) malloc(sizeof(node));
				Node->node = left_node;
				Node->left = NULL;
				Node->right = NULL;
				Root->left = Node;
			}
			if(right_node != '.')
			{
				Node = (node *) malloc(sizeof(node));
				Node->node = right_node;
				Node->left = NULL;
				Node->right = NULL;
				Root->right = Node;				
			}
		}
		else
		{
			find_pointer(Root,target_node);
			find_key = 0;
			
			if(left_node != '.')
			{
				Node = (node *) malloc(sizeof(node));
				Node->node = left_node;
				Node->left = NULL;
				Node->right = NULL;
				Pointer->left = Node;
			}
			if(right_node != '.')
			{
				Node = (node *) malloc(sizeof(node));
				Node->node = right_node;
				Node->left = NULL;
				Node->right = NULL;
				Pointer->right = Node;			
			}
		}
	}
	preorder(Root);
	printf("\n");
	inorder(Root);
	printf("\n");
	postorder(Root);
}