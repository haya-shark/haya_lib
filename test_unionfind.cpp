// This is a testcode of unionfind for https://atcoder.jp/contests/atc001/tasks/unionfind_a
#include <iostream>
#include "unionfind.cpp"
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int *p = new int[q];
    int *a = new int[q];
    int *b = new int[q];
    for (int i = 0; i < q; i++)
    {
        cin >> p[i] >> a[i] >> b[i];
    }
    UnionFind dsu(n);
    for (int i = 0; i < q; i++)
    {
        if (p[i] == 0)
        {
            dsu.unite(a[i], b[i]);
        }
        else
        {
            if (dsu.same(a[i], b[i]))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}