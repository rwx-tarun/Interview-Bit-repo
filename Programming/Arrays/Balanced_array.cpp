// Problem Description

// Given an integer array A of size N. You need to count the number of special elements in the given array.

// A element is special if removal of that element make the array balanced.

// Array will be balanced if sum of even index element equal to sum of odd index element.

int Solution::solve(vector<int> &A) {
int sumO = 0, sumE = 0, cnt = 0, se = 0, so = 0, sO, sE;
for(int i = 0; i < A.size(); i++)
{
    if(i % 2 == 0)
        sumO += A[i];
    else
        sumE += A[i];
}
for(int i = 0; i < A.size(); i++)
{
    if(i % 2 == 0)
    {
        so += A[i];
        sO = sumE - se + so - A[i];
        sE = sumO - so + se;
        if(sO == sE)
            cnt += 1;
    }
    else
    {
        se += A[i];
        sO = sumE - se + so;
        sE = sumO - so + se - A[i];
        if(sO == sE)
            cnt += 1;
    }
}
return cnt;
}
