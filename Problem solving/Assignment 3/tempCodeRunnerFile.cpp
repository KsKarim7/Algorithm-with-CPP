    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        if (dis[x][y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[x][y] << endl;
        }
    }