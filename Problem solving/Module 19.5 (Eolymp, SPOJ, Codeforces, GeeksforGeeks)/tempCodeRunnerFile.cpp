    if (inp % 2 != 0)
    {
        for (int i = 0; i < inp - 1; i++)
        {
            cin >> n;
            if (i == 0)
            {
                c += to_string(n);
            }
            else if (i % 2 == 0)
            {
                c += "-" + to_string(n);
            }
            else
            {
                c += to_string(n);
            }
        }
        cin >> n;
        c += to_string(n);
    }
    else
    {
        for (int i = 0; i < inp; i++)
        {
            cin >> n;
            if (i == 0)
            {
                c += to_string(n);
            }
            else if (i % 2 == 0)
            {
                c += "-" + to_string(n);
            }
            else
            {
                c += to_string(n);
            }
        }
    }
    cout << c;