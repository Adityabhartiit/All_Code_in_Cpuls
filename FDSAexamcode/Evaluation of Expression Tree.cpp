
#include <bits/stdc++.h>
using namespace std;


class node
{
public:
	string info;
	node *left = NULL, *right = NULL;
	node(string x)
	{
		info = x;
	}
};

int toInt(string s)
{
	int num = 0;

	if(s[0]!='-')
		for (int i=0; i<s.length(); i++)
			num = num*10 + (int(s[i])-48);

	else
	{
	for (int i=1; i<s.length(); i++)
		num = num*10 + (int(s[i])-48);
	num = num*-1;
	}
	
	return num;
}

\
int eval(node* root)
{
	
	if (!root)
		return 0;

	if (!root->left && !root->right)
		return toInt(root->info);

	
	int leftval = eval(root->left);

	int rightval = eval(root->right);


	if (root->info=="+")
		return leftval+rightval;

	if (root->info=="-")
		return leftval-rightval;

	if (root->info=="*")
		return leftval*rightval;

	return leftval/rightval;
}

int main()
{

	node *root = new node("+");
	root->left = new node("*");
	root->left->left = new node("5");
	root->left->right = new node("-4");
	root->right = new node("-");
	root->right->left = new node("100");
	root->right->right = new node("20");
	cout << eval(root) << endl;

	return 0;
}
