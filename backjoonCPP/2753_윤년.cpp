#include <iostream>

using namespace std;

int main()
{ //조건문
    int isYear;

    cin >> isYear;

    if (isYear % 4 == 0 && (isYear % 400 == 0 || isYear % 100 != 0))
        cout << 1;
    else
        cout << 0;
    return 0;
}