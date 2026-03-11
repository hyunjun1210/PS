#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    double a;
    double b;
    cout << fixed;
    cout.precision(9);
    
    cin >> a >> b;
    cout << a / b;
}