// ABOBA V2.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class device {
public:
    string fio,data,tel,gorod;
    
    device() {
        cout << "fio" << '\t';
        cin >> fio ;
        cout << endl;

        cout << "data" << '\t';
        cin >> data;
        cout << endl;

        cout << "tele" << '\t';
        cin >> tel;
        cout << endl;

        cout << "gorod" << '\t';
        cin >> gorod;
        cout << endl;

       
       
    }
    ~device() {

    }
    
};
class Stud : public device {
public:
    string strana, grup, school; 
    Stud(){

        cout << "strana" << '\t';
        cin >> strana;
        cout << endl;

        cout << "grup" << '\t';
        cin >> grup;
        cout << endl;

        cout << "sx" << '\t';
        cin >> school;
        cout << endl;
        cout << fio << '\t';
        cout << data << '\t';
        cout << tel << '\t';
        cout << gorod << endl;
        cout << strana << '\t';
        cout << grup << '\t';
        cout << school << endl;
      
    }

    ~Stud(){

    }

};
class Student : public Stud {
public:
    string fio, data, tel, gorod;
    string strana, grup, school;
    Student() {
        
        int col = 0;
        cin >> col;
        string biblioteka[100][7];
        int raz = 0;
        for (int i = 0; i < 6; i++) {
            for (int c = 0; c < 100; c++) {
                biblioteka[c][i] = "sana";
            }
        }
        for (int i = 0; i < col; i++) {
            cout << "fio" << '\t';
            cin >> biblioteka[i][0];
            cout << endl;

            cout << "data" << '\t';
            cin >> biblioteka[i][1];
            cout << endl;

            cout << "tele" << '\t';
            cin >> biblioteka[i][2];
            cout << endl;

            cout << "gorod" << '\t';
            cin >> biblioteka[i][3];
            cout << endl;

            cout << "strana" << '\t';
            cin >> biblioteka[i][4];
            cout << endl;

            cout << "grup" << '\t';
            cin >> biblioteka[i][5];
            cout << endl;

            cout << "sx" << '\t';
            cin >> biblioteka[i][6];
            cout << endl;
            raz = i;
        }
        for (int i = 0; i < raz; i++) {
            
            cout << biblioteka[i][0] << '\t';
            cout << biblioteka[i][1] << '\t';
            cout << biblioteka[i][2] << '\t';
            cout << biblioteka[i][3] << endl;
            cout << biblioteka[i][4] << '\t';
            cout << biblioteka[i][5] << '\t';
            cout << biblioteka[i][6] << endl;
        }
    }
    ~Student() {

    }
    

};
int main()
{
    device Device_instante;
    Stud stud;
    Student a;
    
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
