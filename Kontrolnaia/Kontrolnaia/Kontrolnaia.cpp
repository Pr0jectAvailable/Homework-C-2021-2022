// Kontrolnaia.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
void vivid()
{
    setlocale(0, "Russian");

    std::string s = "Ты идёшь домой с магазина и тебя сбивает белый грузовик"
        " ты просыпаешься в белом кресле в белой комнате и напроти тебя сидит...           чёрный!!!!!!!!!!"
        " ты пугаешься и он тебе предлагает игру.";
    for (auto& x : s) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << x;
    }
    std::cout << "\n";
    
}
using namespace std;
void trupik(int povesilsa) {
    char ch(92);
    if (povesilsa == 0) {
        cout << " __" << endl << "   |" << endl << "   |" << endl << "   |" << endl << "___|";
    }
    else if (povesilsa == 1)
    {
        cout << " __" << endl << " O |" << endl << "   |" << endl << "   |" << endl << "___|";
    }
    else if (povesilsa == 2)
    {
        cout << " __" << endl << " O |" << endl << " | |" << endl << "   |" << endl << "___|";
    }
    else if (povesilsa == 3)
    {
        cout << " __" << endl << " O |" << endl << "/| |" << endl << "   |" << endl << "___|";
    }
    else if (povesilsa == 4)
    {
        cout << " __" << endl << " O |" << endl << "/|" << ch << "| " << endl << "   |" << endl << "___| ";
    }
    else if (povesilsa == 5)
    {
        cout << " __" << endl << " O |" << endl << "/|" << ch << "|" << endl << "/  |" << endl << "___| ";
    }
    else if (povesilsa == 6)
    {
        cout << " __" << endl << " O |" << endl << "/|" << ch << "|" << endl << "/ "<<ch<<"|" << endl << "___| ";
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    ifstream in("F:\\ABOBA\\Kontrolnaia\\qus.txt");//путь к файлу
    int randk = rand() % 10;;
    if (in.is_open()) {
        string line;
        for (int i = 0; i < randk; i++) {
            getline(in, line);
        }
        
        char* slovo = new char[line.size()];
        for (int i = 0; i < line.size(); i++) {
            slovo[i] = line[i];
        }
        char* slovou = new char[line.size()];
        for (int g = 0; g < line.size(); g++) {
            slovou[g] = '_';
        }
        int umer = 0;
        vivid();
        for (int men = 1; men == 1;) {
            int vibors = 0;
            cout << "выбирай: синюю таблетку 1 (ты всё забудешь) или красную 2 (ты всё поймёшь и будешь играть)"<<endl;
            cin >> vibors;
            if (vibors == 2) {

                for (int i = 1; i == 1;) {

                    char vvod;
                    cin >> vvod;
                    int l = 0;
                    for (int c = 0; c < line.size(); c++) {
                        int u = 0;
                        if (vvod == slovo[c]) {
                            slovou[c] = slovo[c];
                            l++;
                        }

                    }
                    if (l > 0) {

                    }
                    else {
                        umer++;
                    }
                    l = 0;
                    for (int g = 0; g < line.size(); g++) {
                        cout << slovou[g];

                    }
                    cout << endl;
                    trupik(umer);
                    cout << endl;
                    if (umer == 6) {
                        cout << "хочешь продолжить духом? (1 да)";
                        int mmnm = 0;
                        cin >> mmnm;
                        if (mmnm == 1) {
                            cout << "ты продолжил духом"<<endl;
                        }
                        else {
                            i = 0;
                        }
                        mmnm = 0;
                    }
                    int rav = 0;
                    for (int g = 0; g < line.size(); g++) {
                        if (slovou[g] == slovo[g]) {
                            rav++;

                        }

                    }
                    if (rav == line.size()) {
                        i = 0;
                        
                        cout << endl << "ты познал тайну ...";
                    }
                }
            }
            else {
                cout << "плохой выбор (и ты теряешь память)"<<endl;
            }
        }
    }
    in.close();
    
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
