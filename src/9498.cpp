#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    short input = 0;
    cin >> input;
    
    switch (input / 10) 
    {
        case 6:
            cout << "D";
            break;
        case 7:
            cout << "C";
            break;
        case 8:
            cout << "B";
            break;
        case 9:
        case 10:
            cout << "A";
            break;
        default:
            cout << "F";
            break;
    }
}