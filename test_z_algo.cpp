// This program is for https://atcoder.jp/contests/abc430/tasks/abc430_e

#include <vector>
#include <iostream>
#include <utility>
#include "z_algo.cpp"
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<pair<string, string>> testcase(t);
    for (int i = 0; i < t; i++)
    {
        cin >> testcase[i].first >> testcase[i].second;
    }
    for (int i = 0; i < t; i++)
    {
        int size = testcase[i].second.size();
        testcase[i].second += testcase[i].first + testcase[i].first;
        int ans = -1;
        vector<int> z = z_algo(testcase[i].second.begin(), testcase[i].second.end());
        // display elements of z
        /*cout << "z:";
        for (auto n : z)
        {
            cout << n << ",";
        }
        cout << endl;*/
        for (int k = size; k < testcase[i].second.size(); k++)
        {
            if (z[k] >= size)
            {
                ans = k - size;
                break;
            }
        }
        cout << ans << endl;
    }
}