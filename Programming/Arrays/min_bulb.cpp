// Problem Description

// There is a corridor in a Jail which is N units long. Given an array A of size N. The ith index of this array is 0 if the light at ith position is faulty otherwise it is 1.

// All the lights are of specific power B which if is placed at position X, it can light the corridor from [ X-B+1, X+B-1].

// Initially all lights are off.

// Return the minimum number of lights to be turned ON to light the whole corridor or -1 if the whole corridor cannot be lighted.


int Solution::solve(vector<int> &A, int B) {
    int i =0;
    int cnt =0;
    bool flag =false;
    int n = A.size();
    while(i<n)
    {
        int rt = min(i+B-1,n-1);
        int lf = max(i-B+1,0);

        while(lf<=rt)
        {
            if(A[rt]==1)
            {
                flag =true;
                break;
            }
            rt--;
        }
        if(!flag)
            return -1;
        cnt++;
        i=rt+B;
    }
    
        
    return cnt;
}
