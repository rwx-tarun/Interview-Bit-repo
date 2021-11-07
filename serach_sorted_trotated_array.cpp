class Solution {
public:
    int search(vector<int>& a, int x) {
    int m;
    int l=0;
    int h=a.size()-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==x)
        return m;
        else if(a[m]>=a[l])              
        {
            if(a[l]<=x && x<=a[m])       
                h=m-1;
            else
                l=m+1;

        }
        else
        {
            if(a[m]<=x && x<=a[h])
                l=m+1;
            else
                h=m-1;    
        }

    }
    return -1;
        
    }
};
