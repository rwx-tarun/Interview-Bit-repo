// Problem Description

// Given a sorted array A containing N integers both positive and negative.

// You need to create another array containing the squares of all the elements in A and return it in non-decreasing order.

// Try to this in O(N) time.

vector<int> Solution::solve(vector<int> &a) {
    int n = a.size();
    vector<int>v(n,0);
    int l=0;
    int h =n-1;
    for(int i =n-1;i>=0;i--)
    {
        if(abs(a[l])>a[h]){
            v[i]=a[l]*a[l];
            l++;
        }

        else{
            v[i]=a[h]*a[h];
            h--;
    }
    }
    return v;
}
