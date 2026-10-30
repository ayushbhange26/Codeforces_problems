#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    map<int, int> mp;

    while (true)
    {
        y++;
        mp.clear();

        int temp = y;

        while (temp > 0)
        {
            int rem = temp % 10;
            mp[rem]++;
            temp /= 10;
        }

        if (mp.size() == 4)
        {
            cout << y;
            break;
        }
    }

    return 0;
}