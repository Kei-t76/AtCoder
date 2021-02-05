#include <iostream>
using namespace std;

int main()
{
    int N, S, D;
    cin >> N >> S >> D;
    for (int i = 0; i < N; i++)
    {
        int X, Y;
        cin >> X >> Y;
        if (X < S && Y > D)
        {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
}