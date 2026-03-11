#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int input = 0;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}