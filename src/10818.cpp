#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int N = 0;
    cin >> N;
    int iMax = -2147483648;
    int iMin = 2147483647;
    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        iMin = (min(input, iMin));
        iMax = (max(input, iMax));
    }
    cout << iMin << ' ' << iMax;
}