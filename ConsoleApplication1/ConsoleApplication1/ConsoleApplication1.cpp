#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    char zvukz;
    char zvuk7 = '\7';
    char zvuk = '\a';
    int z = 7;
    zvukz = z;
    for (int i = 0; i <= 4; ++i)
    {
        std::cout << 'i' << '=' << i << '\t' << zvukz;
    }
    system("pause");
    cout << '\a';
    cout << zvuk7;
    system("pause");
    cout << zvuk;
    system("pause");
    cout << zvukz;
    system("pause");
    cout << "zvuk : " << zvukz << "\n Hello world!"
        << " z=" << z << endl;
    return 0;
}