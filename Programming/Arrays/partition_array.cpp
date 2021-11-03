// Problem Description

// You are given a 1D integer array B containing A integers.

// Count the number of ways to split all the elements of the array into 3 contiguous parts so that the sum of elements in each part is the same.

// Such that : sum(B[1],..B[i]) = sum(B[i+1],...B[j]) = sum(B[j+1],...B[n]) 



int Solution::solve(int A, vector<int> &B) {
    int sm=0;
    for(int i=0;i<B.size();i++)
        sm=sm+B[i];

    
    int res=0;
    if(sm%3==0)
    {
        int c1 = sm/3;
        int c2 = 2*c1;
        sm=0;
        int a1=0;
        for(int i=0;i<B.size()-1;i++)
        {   
            sm+=B[i];
            if(sm == c2)
            {   
                res = res +a1;
            }
            if(sm==c1)
                a1++;   
        }
    }
    return res;
}
