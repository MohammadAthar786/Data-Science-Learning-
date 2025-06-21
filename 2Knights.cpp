#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
long long Solution(long long n)
{
    long long ans = (n * n) * (n * n - 1) / 2 - 4 * (n - 1) * (n - 2);
    return ans;
}
int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cout << Solution(i) << endl;
    }
}
