// ABOBA V1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
   /* int numRows = 10;
    int numCols = 10;
    int array[10][10] = { 0 };
    for (int row =0 ; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            array[row][col]=row*col;
        }
    }
    for (int row = 1; row < numRows; row++) {
        for (int col = 1; col < numCols; col++) {
            cout << array[col][row]<<" \t";
        }
        cout << endl;
    }

    */
    /*
    int sum=0;
    int min = 99;
    int max = 0;
    srand(time(NULL));
    int numRows = 10;
    int numCols = 10;
    int array[10][10] = { 0 };
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            array[row][col] = rand() % 100;
            sum =sum+ array[row][col];
        }
    }
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            cout << array[col][row] << " \t";
        }
        cout << endl;
    }
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            if (array[col][row] > max) {
                max = array[col][row];
            }
            if (array[col][row] < min) {
                min = array[col][row];
            }
        }
        cout << endl;
    }
    cout << "сумма всех чисел: " << sum << endl;;
    cout <<max<<endl ;
    cout <<min<<endl ;
    cout <<sum/99 ;
    */
    /*
    int sum = 0;
    int min = 99;
    int max = 0;
    srand(time(NULL));
    int numRows = 10;
    int numCols = 10;
    int array[10][10] = { 0 };
    int summ[10][2] = { 0 };
    int sun = 0;
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            array[row][col] = rand() % 100;
            sum = sum + array[row][col];

        }
    }

    
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            
            sun = sun + array[col][row];
        }
        summ[row][0] = sun;
        //cout <<" | "<<sun<< endl;
        sun = 0;
        
    }
    cout << endl;
    
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            cout << array[row][col] << " \t";
            sun = sun + array[row][col];
        }
        summ[row][1] = sun;
        cout << " | " << sun << endl;
        sun = 0;

    }
    for (int row = 0; row < numRows; row++) {
        cout << summ[row][0] << "\t";

    }
    cout << endl;
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            cout << array[col][row] << " \t";
            sun = sun + array[col][row];
        }
        
        cout <<" | "<<sun<< endl;
        sun = 0;

    }
    cout << endl;
    for (int row = 0; row < numRows; row++) {
        cout << summ[row][1] << "\t";

    }
    cout << endl;
    cout << "сумма всех чисел: " << sum << endl;;
    cout <<"максимальное число: " << max << endl;
    cout << "минимальное число: " << min << endl;
    cout << "средняя арефметическая сумма: " << sum / 99;
    */
    int sum = 0;
    
    srand(time(NULL));
    int numRows = 5;
    int numCols = 10;
    int array[5][10] = { 0 };
    int summ[5][5] = { 0 };
    int sun = 0;
    int raz = -2;
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            array[row][col] = rand() % 100;
            

        }
    }
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 10; ++col) {
            cout << array[row][col] << "\t";


        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < 5; col++) {
            raz=raz+2;
            cout << raz;
            summ[row][col] = array[row][raz] + array[row][raz+1];
        }
        
        raz = -2;
    }
    /*cout << endl;
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            cout << array[row][col] << "\t";


        }
    }*/
    cout << endl;
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            cout << summ[row][col] << "\t";


        }
        cout << endl;
    }
    cout << endl;
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
