

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");
    const int stroki = 3, elements = 5;
    double massive[stroki][elements];
    
    for (int i = 0; i < stroki; i++) {
        for (int j = 0; j < elements; j++) {
            cin >> massive[i][j];
        }
    }
    cout << endl;
    cout << "Ваш массив: \n";
    for (int i = 0; i < stroki; i++) {
        for (int j = 0; j < elements; j++) {
            cout  << massive[i][j] << "\t";
        }
        cout << endl;
    }
    
    float srar1 = (massive[0][0] + massive[0][1] + massive[0][2] + massive[0][3] + massive[0][4]) / 5;
    cout << "\nСреденее арифметическое первой строки: " << srar1;
    float srar2 = (massive[1][0] + massive[1][1] + massive[1][2] + massive[1][3] + massive[1][4]) / 5;
    cout << "\nСреденее арифметическое второй строки: " << srar2;
    float srar3 = (massive[2][0] + massive[2][1] + massive[2][2] + massive[2][3] + massive[2][4]) / 5;
    cout << "\nСреденее арифметическое третьей строки: " << srar3;
}

