#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string input;
    getline(cin, input);
    int count = 0;
    for (int i = 1; i < (int)(input.length() - 1); i++)
    {
        if (input[i] == ' ')
        {
            count++;
        }
    }
    if (input == " ")
        cout << 0;
    else
        cout <<  (count + (input.length() != 0));
}