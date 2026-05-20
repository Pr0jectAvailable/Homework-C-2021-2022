// M.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<string>
#include< iostream>
#include<time.h>
#include<math.h>
#include<fstream>
#include<Windows.h>
#include <stack>

using namespace std;
template <typename T>
void printStack(stack<T>& s)
{
	if (!s.size())
		return;

	T t = s.top();
	s.pop();

	printStack(s);

	std::cout << t << std::endl;
	s.push(t);
}
void findStack(stack<int> s, int poisk)
{
	int k= s.size();
	for (int i = 0; i < k; i++) {
		if (s.top() == poisk) {
			cout <<poisk<<" найдено под номером " << i+1 << endl;
		}
		s.pop();
	}

	
	
}

void main() {
	setlocale(LC_ALL, "rus");
	stack <int> steck;
	int h = 0;
	int g = 0;
	int y = 0;
	cout << "Введите сколько элементов будет в стеке" << endl;
	cin >> h;
	cout << "Введите элементы которые хотите видеть в стеке" << endl;
	for (int i = 0; i < h; i++) {
		cin >> g;
		steck.push(g);
	}
	/*cout << endl;
	printStack(steck);
	findStack(steck, 5);
	cout << "введи какое число хочешь добавить ";
	int vvod = 0;
	cin >> vvod;
	steck.push(vvod);
	cout << endl;
	printStack(steck);
	cout << "введи какой элемент по индексу надо удалить (считаем с 1 и снизу) ";
	cin >> vvod;
	
	int* mas = new int[steck.size()];
	
	int k = steck.size();
	for (int i = 0; i < k; i++) {
		mas[i] = steck.top();
		steck.pop();
		
	}
	
	while (!steck.empty()) {
		steck.pop();
	}

	for (int i = 0; i < k; i++) {
		if (mas[i] != vvod ) {
			steck.push(mas[i]);
		}

	}
	printStack(steck);
*/
	int* mas = new int[steck.size()];
	int vvod = 0;
	cin >> vvod;
	
	vvod++;
	cout << endl;
	int k = steck.size();
	for (int i = 0; i < k; i++) {
		mas[i] = steck.top();
		steck.pop();

	}
	cout << endl;
	while (!steck.empty()) {
		steck.pop();
	}
	cout << endl;
	for (int i = 0; i < k; i++) {
		if (i == vvod ) {
			
			int p = 0;
			cin >> p;
			steck.push(p);
		}
		else {
			steck.push(mas[i]);
		}
	}
	cout << endl;
	for (int i = 0; i < k; i++) {
		cout << mas[i] << " ";

	}
	cout << endl;
	printStack(steck);
	//for (int i = 0; i < steck.size() - 1; i++) {
		//int y = mas[1];
	
	
	//}
	


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
