// Given a list of non negative integers, arrange them such that they form the largest number.

// For example:

// Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

// Note: The result may be very large, so you need to return a string instead of an integer.

int comp(string x , string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx)>0?1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    string res ="";
    int zero =0;
    vector<string>v;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
            zero++;
        v.push_back(to_string(A[i]));
    }
    sort(v.begin(),v.end(),comp);
    if(zero == A.size())
        return "0";
    for(int i=0;i<A.size();i++)
        res += v[i];
    return res;
}
