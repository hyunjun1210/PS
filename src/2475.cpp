#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int input[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> input[i];
    }

    int sum = 0;

    for (auto i : input)
    {
        sum += i * i;
    }

    cout << (sum % 10);
}