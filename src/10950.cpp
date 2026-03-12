#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int a, b;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
}