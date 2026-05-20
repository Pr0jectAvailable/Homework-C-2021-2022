// ABOBA V2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
using namespace std;
#include "windows.h"
struct Info
{
    string naz[10];
    string avtor[10];
    string izd[10];
    string janr[10];
};
void multiply(Info maks) {
    setlocale(LC_ALL, "rus");
    for (;;) {
        int vvod = 0;
        cout << "1 редактировать 2 печать всех книг 3 поиск книги по автору 4 поиск по названию 5 сортировка по названию 6 сортировка по автору 7 сортировка по издателю";
        cin >> vvod;
        switch (vvod)
        {
        case 1: {
            int u = 0;
            cout << "vvedi id";
            Sleep(5000);
            cin >> u;
            cout << maks.naz[u] << endl;
            cout << maks.avtor[u] << endl;
            cout << maks.izd[u] << endl;
            cout << maks.janr[u] << endl;
            cout << endl;
            cout << "chto budesh ot 1 do 4";
            int y = 0;
            cin >> y;
            switch (y)
            {
            case 1:
                cin >> maks.naz[u];
                break;
            case 2:
                cin >> maks.avtor[u];
                break;
            case 3:
                cin >> maks.izd[u];
                break;
            case 4:
                cin >> maks.janr[u];
                break;


            }
            break;
        }
        case 2: {
            for (int i = 0; i < 10; i++) {
                cout << maks.naz[i] << endl;
                cout << maks.avtor[i] << endl;
                cout << maks.izd[i] << endl;
                cout << maks.janr[i] << endl;
                cout << endl;
            }
            break;
        }
        case 3: {
            cout << "vvedi avtora";
            string av = "a";
            cin >> av;
            for (int i = 0; i < 10; i++) {
                if (av == maks.avtor[i]) {
                    cout << maks.naz[i] << endl;
                    cout << maks.avtor[i] << endl;
                    cout << maks.izd[i] << endl;
                    cout << maks.janr[i] << endl;
                    cout << endl;
                }

            }
            break;
        }
        case 4: {
            cout << "vvedi nazv";
            string as = "a";
            cin >> as;
            for (int i = 0; i < 10; i++) {
                if (as == maks.naz[i]) {
                    cout << maks.naz[i] << endl;
                    cout << maks.avtor[i] << endl;
                    cout << maks.izd[i] << endl;
                    cout << maks.janr[i] << endl;
                    cout << endl;
                }

            }
            break;
        }
        case 5: {
            for (int i = 0; i < 10 - 1; i++)
                for (int j = i + 1; j < 10 - 1; j++)
                {
                    string str = maks.naz[i];
                    string str1 = maks.naz[j];

                    if (str[1] > str1[1])
                    {
                        string temp;
                        temp = maks.naz[i];
                        maks.naz[i] = maks.naz[j];
                        maks.naz[j] = temp;
                    }
                }
            break;
        }
        case 6: {
            for (int i = 0; i < 10 - 1; i++)
                for (int j = i + 1; j < 10 - 1; j++)
                {
                    string str = maks.avtor[i];
                    string str1 = maks.avtor[j];

                    if (str[1] > str1[1])
                    {
                        string temp;
                        temp = maks.avtor[i];
                        maks.avtor[i] = maks.avtor[j];
                        maks.avtor[j] = temp;
                    }
                }


            break;
        }
        case 7: {
            for (int i = 0; i < 10 - 1; i++)
                for (int j = i + 1; j < 10 - 1; j++)
                {
                    string str = maks.izd[i];
                    string str1 = maks.izd[j];

                    if (str[1] > str1[1])
                    {
                        string temp;
                        temp = maks.izd[i];
                        maks.izd[i] = maks.izd[j];
                        maks.izd[j] = temp;
                    }
                }


            break;
        }


        }

    }

}

int main()
{
    setlocale(LC_ALL, "rus");
    Info maks;
    for (int i = 0; i < 10; i++) {
        cin >> maks.naz[i];
        cin >> maks.avtor[i];
        cin >> maks.izd[i];
        cin >> maks.janr[i];
    }
    multiply(maks);
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
