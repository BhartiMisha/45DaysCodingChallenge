bool set = true;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i][0] == 0)
            set = false;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 0)
            {
                v[0][j] = 0;
                v[i][0] = 0;
            }
        }
    }

    int rows = v.size();
    int cols = v[0].size();

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)
        {
            if (v[i][0] == 0 || v[0][j] == 0)
            {
                v[i][j] = 0;
            }
        }
        if (set == false)
            v[i][0] = 0;
    }