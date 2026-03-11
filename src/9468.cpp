#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    int max = 0;
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> input;
        if (max < input)
        {
            max = input;
            count = i + 1;
        }
    }
    cout << max << '\n' << count;
}