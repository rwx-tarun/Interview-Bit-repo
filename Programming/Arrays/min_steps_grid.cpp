// Problem Description

// You are in an infinite 2D grid where you can move in any of the 8 directions

//  (x,y) to 
//     (x-1, y-1), 
//     (x-1, y)  , 
//     (x-1, y+1), 
//     (x  , y-1),
//     (x  , y+1), 
//     (x+1, y-1), 
//     (x+1, y)  , 
//     (x+1, y+1) 
// You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.


int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int  n = A.size();
    int i=1;
    int res =0;
    while(i<n)
    {
        res = max(A[i]-A[i-1],B[i]-B[i-1]);
        i++;
    }
    if(res<0)
        res = -1*res;
    return res;
}
