// ABOBA V0.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    /*int speed = 0, count = 0;
    while (speed < 1000) {
        speed ++;


        count = count + speed;

    }
    cout << count;
    return 0;
    */
    /*
    int rast = 0;
    int nuj = 0;
    int probeg = 0;
    int skoko = 0;
    int den=1;
    cin >> rast;
    cin >> nuj;
    probeg = rast;
    while (rast < nuj) {
        rast = rast *1.1;
        cout << rast << "\n";
        den ++;
        probeg = probeg + rast;

    }
    cout << den;
    return 0;
    */
    /*
    int r;
    srand(time(NULL));
    r=rand()%10;
    int raz = 1;
    int vvod = 0;
    while (r!=vvod)
    {
        if (raz == 1) {
            cout << "";
        }
        else {
            cout << "nepravilno"<< "\n";
        }
        cin >> vvod;
        raz++;

    }
    cout << "win";
    */
    /*
    int chispros = 1;
    int razmax = 1;

    int vvod = 1;
    int raz = 1;
    int proshloe = 0;
    int memory = 0;
    while (vvod>0)
    {
        cin >> vvod;
        
        if (vvod == proshloe) {
            raz++;
            if (raz > razmax)
            {
                razmax = raz;
                chispros = vvod;
            }
        }
        else {
            raz = 1;
            proshloe = vvod;
        }
    }
    cout << chispros << "\n" << razmax;


    return 0;
    */
    int r = 0;
 
    r = rand() % 21;

    int popatka = 0;
    int chto = 0;
    int mat = 0;
    cout << r<< "\n";
    while (r!=chto)
    {
        srand(time(NULL));
        chto = rand() % 21;
        popatka++;
        srand(time(NULL));
        mat = rand() % 10;
        cout << mat;
    }
    cout << "\n" << popatka<< "\n"<< r;

    return 0;
}   

