#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    bool year = (N % 4 == 0) && (N % 100 != 0) || (N % 400 == 0);
    cout << year;
}