// ABOBA V0.8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    /*
    setlocale(LC_ALL, "rus");
    string student[10] = {
        "1","2","3","4","5","6","7","8","9","10"
    };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]" << ":";
        cin >> student[i] ;
    }
    for (int i = 0; i < 10; i++) {

        cout << student[i]<<" ";
    }
    return 0;
    */
    
    int* mas;
    int n=0;
    int sum=0;
    int arm=0;
    cin >> n;
    mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]= ";
        cin >> mas[i];
    }
    int raz = 0;
    

    /*for (int i = 0; raz < n; i = i + 2) {
        cout << i << endl;
        raz++;
        cout << raz << endl;
        sum += mas[i];
    }
    cout << sum << endl;
    raz = 0;
    sum = 0;
    for (int i = -1; raz < n; i = i + 2) {
        cout << i << endl;
        raz++;
        cout << raz << endl;
        sum = sum + mas[i];
    }
    cout << sum << endl;
    */
    /*
    4
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0) {

            sum += mas[i];
        }


    }
    5
    */
    //cout << sum;
    /*
    sum = 1;
    for (int i = -1; i < n; i++)
    {
        if (i == 0) {
            sum *= mas[i];
        }
        else if(i%2==0){
            sum *= mas[i];
        }


    }
    cout << sum;
    6
    */
    /*int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i]>max) {
            max = mas[i];
        }

    }
    cout << max;
    */
    /*
    * 6`
    int max=0;
    max = mas[1];
    for (int i = 0; i < n; i++)
    {

        if (mas[i] < max) {
            max = mas[i];
        }

    }
    cout << max;
    */
    int max = 0;
    int min = 0;
    int maxc = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > max) {
            max = mas[i];
            maxc = i;
        }

    }
    
    
    min = mas[1];
    int minc = 1;
    for (int i = 0; i < n; i++)
    {

        if (mas[i] < min) {
            min = mas[i];
            minc = i;
        }

    }
    int sr = 0;
    int ro = 0;
    int l = 0;
    if (maxc > minc) {
        sr = (maxc - minc) - 1;
        l = minc;
    }
    else
    {
        sr = (minc - maxc) - 1;
        l = maxc;
    }
    
    for (int i = sr; i < l; i++)
    {
        ro *= mas[i];
    }
    cout << ro;
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
