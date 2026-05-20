#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

int score = 0;
char** map;
int userY = 8, userX = 4;

void showUI(char** map, int sizeY, int sizeX) {
	cout << endl << "========== " << score << " =============================================" << endl;
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			cout << map[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "=============================================" << endl;
}

void main() {
	srand(time(nullptr));
	userY= rand() % 6

	map = new char* [13]; //создание массива указателей
	for (int i = 0; i < 13; i++)
		map[i] = new char[5];	//выделение памяти для каждого указателя и сохранения адреса
								//0-го эл-та в данный [i]-тый указатель массива 

	for (int i = 0; i < 13; i++) {	//цикл, отвечающий за обход указателей (строк матрицы)
		for (int j = 0; j < 5; j++) {	//цикл для обхода каждого элемента выбранной ранее строки
			map[i][j] = '0' + rand() % 6;	//занесение случ. символа в i-тую строку и j-тый столбец
		}
	}

	showUI(map, 13, 5);


	char buff = ' ';
	map[userY][userX] = '#';

	char userInput = ' ';
	while (true) {
		showUI(map, 13, 5);

		cout << "user input: ";
		userInput = _getche();

		switch (userInput) {
		case 'w':
		case 'W':
			if (userY > 0 && map[userY - 1][userX] != '*') {
				score += map[userY - 1][userX] - '0';

				buff = map[userY][userX];
				map[userY][userX] = map[userY - 1][userX];
				map[userY - 1][userX] = buff;

				userY--;
			}
			break;
		case 'a':
		case 'A':
			if (userX > 0 && map[userY][userX - 1] != '*') {
				score += map[userY][userX - 1] - '0';

				buff = map[userY][userX];
				map[userY][userX] = map[userY][userX - 1];
				map[userY][userX - 1] = buff;

				userX--;
			}
			break;

		case 's':
		case 'S':
			if (userX > 0 && map[userY + 1][userX] != '*') {
				score += map[userY + 1][userX] - '0';

				buff = map[userY][userX];
				map[userY][userX] = map[userY + 1][userX];
				map[userY + 1][userX] = buff;

				userY++;
			}
			break;


		case 'D':
		case 'd':
			if (userX > 0 && map[userY][userX + 1] != '*') {
				score += map[userY][userX + 1] - '0';

				buff = map[userY][userX];
				map[userY][userX] = map[userY][userX + 1];
				map[userY][userX + 1] = buff;

				userX++;
			}
			break;

		}


	}

	//0. Создать двумерный массив размером 3х4 (строка на столбец)
	//1. Зарандомить случайные числа от 1 до 7 во все ячейки
	//*. Зарандомить в чётные по индексу СТРОКИ числа от 1 до 7, а в нечётные от 8 до 13

	//2. отобразить двумерный массив в корретной форме (в виде прямоугольника)

	//3. Найти максимальное значение во всей матрице и поделить его на минимальное (отобразить рез-т)
	//*. Найти максимальные и минимальные значения для каждой строки отдельно и отобразить результат деления из п.3

	//4. Заменить 5 случайных эл-тов матрицы на число 77, генерируя случайно строку и столбец по которым будет производиться замена 

	//5*. Сгенерировать карту для игры и реализовать управление символом персонажа с использ.
	//команд ввода и клавиатуры (рек. использовать switch и бесконечный цикл while)

}