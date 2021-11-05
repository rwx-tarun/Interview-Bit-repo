int Solution::solve(vector<int> &A) {
    int n = A.size();
    int mn = INT_MAX;
    int mx = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        mx = max(mx,A[i]);
        mn = min(mn,A[i]);
    }
    return mx+mn;
}
