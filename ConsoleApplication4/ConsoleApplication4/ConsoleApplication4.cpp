// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class stroka {
    string str;
public:
    stroka() {
    }
    stroka(string stro) {
        cout << endl << "prinal"<<endl;
    }
    stroka(const stroka &kil) {
        cout << endl << "skopirovano"<<endl;
    }
    stroka(string kol) {
        kol = "st";
        cout << endl << kol << endl;
    }
    stroka(string kpol) {
        
        cout << endl << kpol.size() << endl;
    }
    stroka(string ksol) {

        cout << endl <<"ochishenaya stroka ee net : )" << ksol << endl;
    }
    stroka operator + (const stroka& c1) {
        string plus;
        plus = str + c1.str;
        cout <<endl<< plus;
    }
    stroka operator += (const stroka& c1) {
        str = str + c1.str;
        cout <<endl<< str;
    }
    stroka operator == (const stroka& c1) {
        if (str == c1.str) {
            cout <<endl<< "raven";
        }
        else {
            cout << endl << "neraven";
        }
    }
    ~stroka() {

    }
};
int main()
{
    std::cout << "Hello World!\n";
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
