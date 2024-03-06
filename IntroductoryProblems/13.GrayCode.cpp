#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

bool match(int a, int b, int n)
{
    int diff = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((a & (1 << i)) != (b & (1 << i)))
            ++diff;
    }
    if (diff > 1)
        return false;
    return true;
}
void print(int a, int n)
{
    for (int i = n - 1; i >= 0; --i)
    {
        if (a & (1 << i))
            std::cout << '1';
        else
            std::cout << '0';
    }
    std::cout << '\n';
}
int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<bool> done((1 << n) + 1);
    done[0] = true;
    print(0, n);
    int prev = 0;
    for (int i = 1; i < (1 << n); ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int curr = prev ^ (1 << j);
            if (done[curr])
                continue;
            
            prev = curr;
            done[prev] = true;
            print(prev, n);
            break;
        }
    }

    return 0;
}
