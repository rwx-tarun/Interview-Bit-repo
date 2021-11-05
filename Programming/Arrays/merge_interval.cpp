// Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

// You may assume that the intervals were initially sorted according to their start times.

// Example 1:

// Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].

// Example 2:

// Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].

// This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

// Make sure the returned intervals are also sorted.



/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &v, Interval newInterval) {
    int start = newInterval.start;
    int end = newInterval.end;
    int n = v.size();
    int flag =0;
    vector<Interval>res;

    for(int i =0;i<n;i++)
    {
        if(v[i].end<start)
            res.push_back(v[i]);
        else if(v[i].start>end)
        {
            if(flag ==0){
                res.push_back({start,end});
                flag =1;
            }
            res.push_back(v[i]);
        }
        else{
            start = min(start,v[i].start);
            end = max(end,v[i].end);
        }
    }
    if(!flag)
    res.push_back({start,end});
    return res;
}
