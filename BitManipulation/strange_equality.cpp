// Problem Description

// Given an integer A.
// Two numbers X and Y are defined as follows:

// X is the greatest number smaller than A such that XOR sum of X and A is the same as the sum of X and A.
// Y is the smallest number greater than A such that XOR sum of Y and A is the same as the sum of Y and A.
// Find and return the XOR of X and Y.

// NOTE 1: XOR of X and Y is defined as X ^ Y where '^' is the BITWISE XOR operator.

// NOTE 2: Your code will be run against a maximum of 100000 Test Cases.

int Solution::solve(int A) {
    int  a =A;
    int cnt=0;
    while(a)
    {
        a=a&(a-1);
        cnt++;
    }

    cnt = log2(A)+1;
    int y = (1<<cnt);
    int x =0;
    for(int i=0;i<cnt;i++)
    {
        if(A&(1<<i))
            continue;
        x=x^(1<<i);
    }
    return x^y;
}
