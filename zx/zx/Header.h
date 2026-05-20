#pragma once
struct tnode;
void treeprint(tnode* tree);
void printtree(tnode* tree,int n);
void freemem(tnode* tree);
struct tnode* addnode(int x, tnode* tree);
void exs(tnode* tree, int raz, int nuj, int a, int *mas);
