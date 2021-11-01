Problem Description

Given an integer array A of size N.

You can pick B elements from either left or right end of the array A to get maximum sum.

Find and return this maximum possible sum.


int Solution::solve(vector<int> &A, int B) {
    int sm1 = 0;
    int n =A.size();
    for(int i=0;i<n;i++)
        sm1=sm1+A[i];
    
    int i =0,j=n-B-1;
    int sm2=0;
    for(int k = i;k<=j;k++)
    {
        sm2+=A[k];
    }
    int mn = sm2;
    while(j<n)
    {   
        
        sm2 = sm2 - A[i++] + A[++j];
        mn = min(sm2,mn);
    }
    return sm1-mn;
}
