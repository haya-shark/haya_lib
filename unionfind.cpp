class UnionFind
{
    int *parents;
    int *stack;

public:
    UnionFind(int n)
    {
        parents = new int[n];
        stack = new int[n];
        for (int i = 0; i < n; i++)
        {
            parents[i] = -1;
        }
    }
    ~UnionFind()
    {
        delete[] parents;
        delete[] stack;
    }
    int find(int index)
    {
        int now = parents[index];
        int sp = 0;
        while (now >= 0)
        {
            stack[sp++] = index;
            index = now;

            now = parents[index];
        }
        while (sp > 0)
        {
            parents[stack[--sp]] = index;
        }
        return index;
    }
    void unite(int a, int b)
    {
        if (a == b)
            return;
        int a_parent = find(a);
        int b_parent = find(b);
        if (parents[a_parent] < parents[b_parent])
        {
            parents[a_parent] += parents[b_parent];
            parents[b_parent] = a_parent;
        }
        else
        {
            parents[b_parent] += parents[a_parent];
            parents[a_parent] = b_parent;
        }
    }
    bool same(int a, int b)
    {
        return find(a) == find(b);
    }
};