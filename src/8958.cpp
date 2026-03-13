#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int input;
    cin >> input;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < input; i++)
    {
        string line;
        cin >> line;
        for (int j = 0; j < line.length(); j++)
        {
            if (line[j] == 'X')
            {
                count = 0;
                continue;
            }
            sum = sum + ++count;
        }
        cout << sum << '\n';
        sum = 0;
        count = 0;
    }

}