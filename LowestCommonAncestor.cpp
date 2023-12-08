struct LowestCommonAncestor
{

    int Par[N][19],h[N];

    void dfs(int u, int par) {

        Par[u][0] = par;
        h[u] = h[par] + 1;
        for (pair<int,int> x:edge[u])
            if (par!=x.fi) dfs(x.fi,u);

    }

    void connect() {

        for (int j=1;j<19;j++)
            for (int i=1;i<=n;i++)
                Par[i][j] = Par[Par[i][j-1]][j-1];

    }
    
    int lca(int u,int v) {

        if (h[u]>h[v]) swap(u,v);

        for (int j=18;j>=0;j--)
            if ((h[v]-(1<<j))>=h[u]) v = Par[v][j];


        if (u==v) return u;
        for (int j=18;j>=0;j--)
            if (Par[u][j]!=Par[v][j]) {

                u = Par[u][j];
                v = Par[v][j];

            }

        return Par[u][0];

    }

} LCA;
