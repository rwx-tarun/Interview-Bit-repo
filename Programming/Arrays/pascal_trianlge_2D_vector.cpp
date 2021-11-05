vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>>v;
    for(int i=0;i<A;i++)
    {
        vector<int>s;
        for(int j =0;j<=i;j++)
        {
            if(j==0|| j== i)
                s.push_back(1);
            else
                s.push_back(v[i-1][j-1]+v[i-1][j]);
        }
        v.push_back(s);
    }
    return v;
}
