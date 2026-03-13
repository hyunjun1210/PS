#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int A, C;
    string B;
    cin >> A >> B >> C;
    cout << A + stoi(B) - C << '\n';
    for (int i = 0; i < B.length(); i++)
    {
        A = A * 10;
    }
    cout << A + stoi(B) - C;
    //34 - 5
    //10 80 9
    //1080 O
    //180
    //200 8 9
}