// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Trans {
public:
    
    
protected:
    double gruz;
    double chel;
};
class vel:public Trans{
public:
    
    void display() {
        cout << "velosiped" << endl;
        cout << "gruz ";
        cin >> gruz;
        cout << "chel ";
        cin >> chel;
    }
    void pod() {
        cout << endl << "velosiped" << endl;
        cout << "gruz "<< 1 * gruz*1*0.80;
        cout << "chel " << 1 * chel * 1 * 0.80;
    }
};
class mash:public Trans {
public:
    
    void display(){
        cout << "mashina" << endl;
        cout << "gruz ";
        cin >> gruz;
        cout << "chel ";
        cin >> chel;
    }
    void pod() {
        cout <<endl<< "mashina" << endl;
        cout << "gruz " << 1 * gruz*1*1;
        cout << "chel " << 1 * chel*10*1;
    }
};
class povoz :public Trans {
public:
    
    void display(){
        cout << "povozka" << endl;
        cout << "gruz ";
        cin >> gruz;
        cout << "chel ";
        cin >> chel;
    }
    void pod() {
        cout <<endl<< "povozka" << endl;
        cout << "gruz " << 1 * gruz*1*3;
        cout << "chel " << 1 * chel*10*3;
    }
};

int main() {
    vel tomr;
    tomr.display();
    mash tom;
    tom.display();
    povoz toml;
    toml.display();
    tomr.pod();
    tom.pod();
    toml.pod();
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
