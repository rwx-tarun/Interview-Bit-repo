// Problem Description

// Given an array A containing N integers.

// You need to find the maximum sum of triplet ( Ai + Aj + Ak ) such that 0 <= i < j < k < N and Ai < Aj < Ak.

// If no such triplet exist return 0.




int Solution::solve(vector<int> &A) {
    int n = A.size();
    if(n==2)    return 0;
    vector<int>v(n);
    set<int>st;
    v[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
        v[i]=max(v[i+1],A[i]);
    
    
    int sm =0;
    st.insert(A[0]);
    for(int i=1;i<n;i++)    
    {
        st.insert(A[i]);
        auto it = st.find(A[i]);

        if(it!=st.begin() && v[i]!=A[i])
            sm = max(sm,(*--it)+ A[i]+v[i]);
    }
    return sm;
}   
