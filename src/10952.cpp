#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    while (true)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        cout << a + b << '\n';
    }
}