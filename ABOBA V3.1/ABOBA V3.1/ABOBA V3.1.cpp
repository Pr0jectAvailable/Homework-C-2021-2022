// ABOBA V3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class Bird {
private:
    string birds ;
    int chtuka ;
public:
    Bird(int x)  {
        chtuka = x;
        cout << chtuka << endl;
    }
    Bird(const Bird& s) {
        cout << endl << s.chtuka << endl;
        string yut=std::to_string(s.chtuka);
        
        birds = birds + "Bird#" + yut;
        cout << endl << yut << endl;
    }
    friend std::ostream& operator<<(std::ostream& out, const Bird& point);
    
};
std::ostream& operator<<(std::ostream& out, const Bird& point) {
    out << "Point(" << point.birds<<")";
    return out;
}
int main()
{

    int vvod = 1;
    cin >> vvod;
    Bird point1(vvod);
    std::cout << point1;
    Bird fot = point1;
    std::cout << fot;
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
