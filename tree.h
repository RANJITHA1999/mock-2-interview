typedef struct tree
{
	struct tree *left;
	int data;
	struct tree *right;
}node;
void create_tree(int);
void inorder(node*);
void preorder(node*);
void postorder(node*);

