#include <iostream>

using namespace std;

int main()
{
    int testScore;

    cin >> testScore;


    if ( testScore >= 90 )
        cout << "A";
    else if ( testScore >= 80 )
        cout << "B";
    else if ( testScore >= 70 )
        cout << "C";
    else if ( testScore >= 60 )
        cout << "D";
    else
        cout << "F";

    return 0;
}