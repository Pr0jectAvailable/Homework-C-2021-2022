// ABOBADOMA 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include<cmath>
using namespace std;




int main()
{
    /*
    int vvod = 0;
    cin >> vvod;
    //int y = vvod - 1;
    int x = pow(vvod-1, 2)+2*(vvod-1)+1;
    cout << x;
    */
    int xran[6] = { 2,4,4,4,2,0 };
    for (int i = 0; i < 5; i++) {
        animals currentSeason = chicken;
        cout << xran[i];
        if (i = 0) {
            currentSeason = chicken;
        }
        if (i = 1) {
            currentSeason = lion;
        }
        if (i = 2) {
            currentSeason = giraffe;
        }
        if (i = 3) {
            currentSeason = elephant;
        }
        if (i = 4) {
            currentSeason = duck;
        }
        if (i = 5) {
            currentSeason = snake;
        }
        cout << '\t' << currentSeason;
    }
}
enum animals
{
    chicken,
    lion,
    giraffe,
    elephant,
    duck,
    snake
};



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
