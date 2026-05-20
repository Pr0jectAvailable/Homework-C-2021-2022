#include <iostream>
using namespace std;
struct tnode
{
	int field;
	struct tnode* left;
	struct tnode* right;
};
void treeprint(tnode* tree) {
	if (tree != NULL) {
		treeprint(tree->left);
		//cout << tree->field << " ";
		treeprint(tree->right);
	}
}

void printtree(tnode* tree, int n) {
	if (tree) {
		printtree(tree->right, n + 5);
		for (int i = 0; i < n; i++)
			cout << " ";
		cout << tree->field << endl;
		printtree(tree->left, n + 5);
	}
}
struct tnode* addnode(int x, tnode* tree) {
	if (tree == NULL) { // Если дерева нет, то формируем корень
		tree = new tnode; // память под узел
		tree->field = x;   // поле данных
		tree->left = NULL;
		tree->right = NULL; // ветви инициализируем пустотой
	}
	else  if (x < tree->field)   // условие добавление левого потомка
		tree->left = addnode(x, tree->left);
	else    // условие добавление правого потомка
		tree->right = addnode(x, tree->right);
	return(tree);
}
void freemem(tnode* tree) {
	if (tree != NULL) {
		freemem(tree->left);
		freemem(tree->right);
		delete tree;
	}
}

void exs(tnode* tree,int raz,int nuj,int a,int *mas) {
	
	if (tree != NULL) {
		raz++;
		exs(tree->right, raz,nuj,a,mas);
		
		
		exs(tree->left, raz,nuj,a,mas);
		
		
		
		
		mas[raz] = mas[raz]+tree->field;
	}
	
	
}

