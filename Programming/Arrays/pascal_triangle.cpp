// Find kth Row in Pascal Triangle

vector<int> Solution::getRow(int A) {
    vector<int>v(A+1,1);
    

    for(int i =1;i<A;i++)
    {
        for(int j = i;j>0;j--)
        {
            v[j]=v[j-1]+v[j];
        }
    }
    return v;
}

