#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <cmath>
using namespace std;
int Solution(vector<int> a, int target)
{
    int n = a.size();
    sort(a.begin(), a.end());
    int ans = INT_MIN;
    int diff = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int eff_target = target - a[i];
        int j = i + 1, k = n - 1;
        while (j < k)
        {

            if (a[j] + a[k] <= eff_target)
            {
                if (diff > abs(a[j] + a[k] - eff_target))
                {
                    diff = abs(a[j] + a[k] - eff_target);
                    ans = a[i] + a[j] + a[k];
                }
                j++;
            }
            else
            {
                if (diff > abs(a[j] + a[k] - eff_target))
                {
                    diff = abs(a[j] + a[k] - eff_target);
                    ans = a[i] + a[j] + a[k];
                }
                k--;
            }
        }
    }
    cout << ans << endl;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    Solution(a, target);
    return 0;
}
