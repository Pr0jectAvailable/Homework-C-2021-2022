// ABOBA V2.8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;

class stringh {
private:
	char* S;

	int len;
public:
	stringh();
	stringh(char* s);
	stringh(const stringh&s);
	~stringh() {
		delete[] S;
	}
	void Sort(stringh s[], int n);
	const char* GetStr()const {
		return S;
	}
	void SetStr() {
		if (S != NULL)
		{
			delete[]S;
		}
		char a[256];
		cin.getline(a, 256);
		len = strlen(a) + 1;
		S = new char[len];
		strcpy(S, a);
	}
	void SetStr2(char* str) {
		if (S != NULL)
		{
			delete[]S;
		}
		len = strlen(str) + 1;
		S = new char[len];
		strcpy(S, str);

	}

};
stringh::stringh() {
	S = NULL;
	len = 0;
}
stringh::stringh(char* s) {
	len = strlen(s);
	S = new char[len + 1];
	strcpy(S, s);
}
stringh::stringh(const stringh& s) {
	len = s.len;
	S = new char[len + 1];
	strcpy(S, s.S);
}
void stringh::Sort(stringh s[], int n) {
	stringh temp;
	for (int i = 0; i < n - 1; i++) {
		for(int j = n - 1; j > i; j--) {
			if (strcmp(s[j].S, s[j - 1].S) < 0) {
				temp.SetStr2(s[j].S);
				s[j].SetStr2(s[j - 1].S);
				s[j - 1].SetStr2(temp.S);
			}
		}
	}
}
int main()
{
	int n, i;
	cout << "iput\t";
	cin >> n;
	if (n < 0) {
		cout << "error \t" << n << endl;
		return 0;
	}
	char c[2];
	cin.getline(c, 2);
	stringh* s = new stringh[n];
	for (i = 0; i < n; i++) {
		s[i].SetStr();

	}
	s->Sort(s, n);
	for (i = 0; i < n; i++) {
		cout << "\n" << s[i].GetStr() << "\n";
	}
	delete[] s;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
