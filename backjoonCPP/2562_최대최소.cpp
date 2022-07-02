#include <iostream>

using namespace std;

int main()
{
    int num[9] = {0};
    int n = 0;
    int max = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];
        if(max < num[i])
        {
            max = num[i];
            n = i +1;
        }
    }
    cout << max << "\n" << n;
    return 0;
}

