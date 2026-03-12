#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int count = 0;
        string input;
        cin >> count >> input;
        for (int j = 0; j < input.length(); j++)
        {
            for (int k = 0; k < count; k++)
            {
                cout << input[j];
            }
        }
        cout << '\n';
    }
}