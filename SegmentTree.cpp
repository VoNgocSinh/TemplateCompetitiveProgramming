//SegmentTree Basic
struct SegmentTree
{

    int S[4 * N];

    void build(int id, int l, int r)
    {
        if (l == r)
        {
            S[id] = a[l];
            return;
        }

        int mid = (l + r) / 2;

        build(id * 2, l, mid);
        build(id * 2 + 1, mid + 1, r);

        S[id] = (S[id * 2] + S[id * 2 + 1]);
    }

    void update(int id, int l, int r, int p, int k)
    {
        if (p < l || p > r)
            return;

        if (l == r)
        {
            S[id] = k;
            return;
        }

        int mid = (l + r) / 2;

        update(id * 2, l, mid, p, k);
        update(id * 2 + 1, mid + 1, r, p, k);

        S[id] = (S[id * 2] + S[id * 2 + 1]);
    }

    int get(int id, int l, int r, int u, int v)
    {
        if (v < l || r < u)
            return 0;
        if (l >= u && r <= v)
            return S[id];

        int mid = (l + r) / 2;

        return get(id * 2, l, mid, u, v) + get(id * 2 + 1, mid + 1, r, u, v);
    }

} IT;
