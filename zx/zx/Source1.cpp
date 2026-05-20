#include <iostream>
using namespace std;
#include "Header.h"


int main() {
	struct tnode* root = 0;
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "rus");
	int a=0;
	int y = 0;
	cin >> y;
	for (int i = 0; i < y; i++) {
		cout << "vvedi uzel " << i + 1 << ": ";
		cin >> a;
		root = addnode(a, root);
	}
	int* mas = new int[y];
	printtree(root, a);
	cout << endl;
	
	exs(root, 0, 0,a,mas);
	for (int i = 0; i < y; i++) {
		cout << mas[i]<<endl;
	}
	return 0;
}