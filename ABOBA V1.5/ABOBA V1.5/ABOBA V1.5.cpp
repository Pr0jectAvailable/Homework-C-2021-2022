// ABOBA V1.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <string>
using namespace std;



void storona1() {
    cout << "@@@@@@@" << endl << "@@@@@@@" << endl << "@@@ @@@" << endl << "@@@@@@@" << endl << "@@@@@@@" << endl;
}
void storona2() {

    cout << "@@@@@@@" << endl << "@ @@@@@" << endl << "@@@@@@@" << endl << "@@@@@ @" << endl << "@@@@@@@" << endl;
}
void storona3() {
    cout << "@@@@@@@" << endl << "@ @@@@@" << endl << "@@@ @@@" << endl << "@@@@@ @" << endl << "@@@@@@@" << endl;
}
void storona4() {

    cout << "@@@@@@@" << endl << "@ @@@ @" << endl << "@@@@@@@" << endl << "@ @@@ @" << endl << "@@@@@@@" << endl;
}
void storona5() {
    cout << "@@@@@@@" << endl << "@ @@@ @" << endl << "@@@ @@@" << endl << "@ @@@ @" << endl << "@@@@@@@" << endl;
}
void storona6() {

    cout << "@@@@@@@" << endl << "@ @ @ @" << endl << "@@@@@@@" << endl << "@ @ @ @" << endl << "@@@@@@@" << endl;
}

int main()
{
    int schetbot = 0;
    int schetnebot = 0;
    int rans = 0;
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    string name;
    cout << "введи имя ";
    getline(cin, name);
    for (int raz = 0; raz < 1; ) {
        int vvod = 0;
        cout << "бросать кубик да(1)?";
        cin >> vvod;
        
        
        if (vvod == 1) {
            cout << "игрок " << name << endl;
            rans = rand() % 5 + 1;
            schetnebot += rans;
            if (rans == 1) {
                storona1();
            }
            else if (rans == 2) {
                storona2();
            }
            else if (rans == 3) {
                storona3();
            }
            else if (rans == 4) {
                storona4();
            }
            else if (rans == 5) {
                storona5();
            }
            else if (rans == 6) {
                storona6();
            }
            cout << endl;
            rans = rand() % 5 + 1;
            schetnebot += rans;
            if (rans == 1) {
                storona1();
            }
            else if (rans == 2) {
                storona2();
            }
            else if (rans == 3) {
                storona3();
            }
            else if (rans == 4) {
                storona4();
            }
            else if (rans == 5) {
                storona5();
            }
            else if (rans == 6) {
                storona6();
            }
            cout << "бот" << endl;
            rans = rand() % 5 + 1;
            schetbot += rans;
            if (rans == 1) {
                storona1();
            }
            else if (rans == 2) {
                storona2();
            }
            else if (rans == 3) {
                storona3();
            }
            else if (rans == 4) {
                storona4();
            }
            else if (rans == 5) {
                storona5();
            }
            else if (rans == 6) {
                storona6();
            }
            cout << endl;
            rans = rand() % 5 + 1;
            schetbot += rans;
            if (rans == 1) {
                storona1();
            }
            else if (rans == 2) {
                storona2();
            }
            else if (rans == 3) {
                storona3();
            }
            else if (rans == 4) {
                storona4();
            }
            else if (rans == 5) {
                storona5();
            }
            else if (rans == 6) {
                storona6();
            }
            cout << "бот набрал столько очков: " << endl << schetbot << endl;
            cout << "игрок " << name << " набрал столько очков: " << endl << schetnebot << endl;
        }
        else {
            raz = 1;
        }
    }
    
    if (schetbot < schetnebot) {

        cout << "игрок "<<name<<" выйграл";
    }
    else if (schetbot > schetnebot) {

        cout << "бот выйграл";
    }
    else {
        cout << "ничья";
    }





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
