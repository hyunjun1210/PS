#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        int input;
        cin >> input;
        if (b > input)
        {
            cout << input << ' ';
        }
    }
}