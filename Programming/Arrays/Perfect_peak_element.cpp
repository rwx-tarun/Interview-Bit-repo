// Problem Description

// Given an integer array A of size N.

// You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

// If it exists return 1 else return 0.

// NOTE:

// Do not consider the corner elements i.e A[0] and A[N-1] as the answer.


int Solution::perfectPeak(vector<int> &A) {
    
    int n = A.size();
    vector<int>rt(n);
    vector<int>lf(n);
    lf[0]=A[0];
    rt[n-1]=A[n-1];

    for(int i =1;i<n;i++)
        lf[i]=max(A[i],lf[i-1]);
    
    for(int i =n-2;i>=0;i--)
        rt[i]=min(A[i],rt[i+1]);

    for(int i=1;i<n-1;i++){
        if(A[i]>lf[i-1] && A[i]<rt[i+1])
            return 1;
    }
    return 0;
}
